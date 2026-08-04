// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.RegularExpressions.CaptureCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Reflection;
using Il2CppDummyDll;

namespace System.Text.RegularExpressions;

[Token(Token = "0x200009E")]
[DebuggerDisplay("Count = {Count}")]
[DebuggerTypeProxy(typeof(CollectionDebuggerProxy<Capture>))]
[DefaultMember("Item")]
public class CaptureCollection
{
	[Token(Token = "0x400026F")]
	[FieldOffset(Offset = "0x10")]
	private readonly Group _group;

	[Token(Token = "0x4000270")]
	[FieldOffset(Offset = "0x18")]
	private readonly int _capcount;

	[Token(Token = "0x4000271")]
	[FieldOffset(Offset = "0x20")]
	private Capture[] _captures;
}
