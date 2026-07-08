using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000084")]
public interface IGraphElementWithDebugData : IGraphElement, IGraphItem, INotifiedCollectionItem, IDisposable, IPrewarmable, IAotStubbable, IIdentifiable, IAnalyticsIdentifiable
{
	[Token(Token = "0x60003E1")]
	IGraphElementDebugData CreateDebugData();
}
