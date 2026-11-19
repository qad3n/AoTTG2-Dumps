// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Channels.SinkProviderData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Channels;

[Token(Token = "0x200038D")]
[ComVisible(true)]
public class SinkProviderData
{
	[Token(Token = "0x4000E83")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private string sinkName;

	[Token(Token = "0x4000E84")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private ArrayList children;

	[Token(Token = "0x4000E85")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Hashtable properties;

	[Token(Token = "0x1700037C")]
	public IList Children
	{
		[Token(Token = "0x6001DF1")]
		[Address(RVA = "0x538A4F0", Offset = "0x53894F0", VA = "0x538A4F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700037D")]
	public IDictionary Properties
	{
		[Token(Token = "0x6001DF2")]
		[Address(RVA = "0x538A500", Offset = "0x5389500", VA = "0x538A500")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001DF0")]
	[Address(RVA = "0x538A440", Offset = "0x5389440", VA = "0x538A440")]
	public SinkProviderData(string name)
	{
	}
}
