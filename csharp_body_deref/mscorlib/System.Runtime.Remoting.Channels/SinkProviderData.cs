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

[Token(Token = "0x2000385")]
[ComVisible(true)]
public class SinkProviderData
{
	[Token(Token = "0x4000F16")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private string sinkName;

	[Token(Token = "0x4000F17")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private ArrayList children;

	[Token(Token = "0x4000F18")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Hashtable properties;

	[Token(Token = "0x1700037B")]
	public IList Children
	{
		[Token(Token = "0x6001DAC")]
		[Address(RVA = "0x3B825F0", Offset = "0x3B825F0", VA = "0x3B825F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700037C")]
	public IDictionary Properties
	{
		[Token(Token = "0x6001DAD")]
		[Address(RVA = "0x3B82600", Offset = "0x3B82600", VA = "0x3B82600")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001DAB")]
	[Address(RVA = "0x3B82540", Offset = "0x3B82540", VA = "0x3B82540")]
	public SinkProviderData(string name)
	{
	}
}
