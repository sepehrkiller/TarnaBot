#ifndef VIDEONOTE_H
#define VIDEONOTE_H
#include <QJsonObject>
#include <QVariant>
#include <QString>

#include "photosize.h"

class VideoNote
{
public:
    VideoNote(QJsonObject obj);
    VideoNote();
    
    static VideoNote fromObject(QJsonObject obj);
    //Getters/Setters
    
    QString getFileId() const;
    void setFileId(const QString &value);
    
    qint64 getLength() const;
    void setLength(const qint64 &value);
    
    qint64 getDuration() const;
    void setDuration(const qint64 &value);
    
    qint64 getFileSize() const;
    void setFileSize(const qint64 &value);
    
    PhotoSize getThumb() const;
    void setThumb(const PhotoSize &value);
    
private:
    QString fileId;
    
    qint64 length;
    qint64 duration;
    qint64 fileSize;
    
    PhotoSize thumb;
    
    QJsonObject root;
};

#endif // VIDEONOTE_H