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

[Token(Token = "0x20003B4")]
[ComVisible(true)]
public class SinkProviderData
{
	[Token(Token = "0x4000F23")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private string sinkName;

	[Token(Token = "0x4000F24")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private ArrayList children;

	[Token(Token = "0x4000F25")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Hashtable properties;

	[Token(Token = "0x1700037D")]
	public IList Children
	{
		[Token(Token = "0x6001E1B")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700037E")]
	public IDictionary Properties
	{
		[Token(Token = "0x6001E1C")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001E1A")]
	[Address(RVA = "0x1A08A30", Offset = "0x1A07030", VA = "0x181A08A30")]
	public SinkProviderData(string name)
	{
	}
}
