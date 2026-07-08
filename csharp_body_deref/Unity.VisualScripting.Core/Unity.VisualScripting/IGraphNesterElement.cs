using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000088")]
public interface IGraphNesterElement : IGraphParentElement, IGraphElement, IGraphItem, INotifiedCollectionItem, IDisposable, IPrewarmable, IAotStubbable, IIdentifiable, IAnalyticsIdentifiable, IGraphParent, IGraphNester
{
}
