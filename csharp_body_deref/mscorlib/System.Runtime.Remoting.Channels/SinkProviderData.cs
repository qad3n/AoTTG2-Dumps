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
		[Address(RVA = "0x4E9CAD0", Offset = "0x4E9CAD0", VA = "0x4E9CAD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700037C")]
	public IDictionary Properties
	{
		[Token(Token = "0x6001DAD")]
		[Address(RVA = "0x4E9CAE0", Offset = "0x4E9CAE0", VA = "0x4E9CAE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001DAB")]
	[Address(RVA = "0x4E9CA20", Offset = "0x4E9CA20", VA = "0x4E9CA20")]
	public SinkProviderData(string name)
	{
	}
}
