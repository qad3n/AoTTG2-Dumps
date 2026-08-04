// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.IGraphElementWithDebugData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000084")]
public interface IGraphElementWithDebugData : IGraphElement, IGraphItem, INotifiedCollectionItem, IDisposable, IPrewarmable, IAotStubbable, IIdentifiable, IAnalyticsIdentifiable
{
	[Token(Token = "0x60003E1")]
	IGraphElementDebugData CreateDebugData();
}
