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
