#ifndef CUDISPLAYFILTER_H
#define CUDISPLAYFILTER_H
#include "drawengine/abstractfilter.h"
#include <QObject>

class CUDisplayFilter : public QObject, public AbstractFilter
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "cn.edu.gitl.sysu.gitlhevcanalyzer.AbstractFilter")
    Q_INTERFACES(AbstractFilter)
public:
    explicit CUDisplayFilter(QObject *parent = 0);

    virtual bool drawCU   (FilterContext* pcContext, QPainter* pcPainter,
                           ComCU *pcCU, double dScale,  QRect* pcScaledArea);

signals:
    
public slots:
    
};

#endif // CUDISPLAYFILTER_H