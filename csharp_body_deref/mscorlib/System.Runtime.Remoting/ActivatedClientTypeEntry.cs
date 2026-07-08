using System.Runtime.InteropServices;
using System.Runtime.Remoting.Contexts;
using Il2CppDummyDll;

namespace System.Runtime.Remoting;

[Token(Token = "0x200033A")]
[ComVisible(true)]
public class ActivatedClientTypeEntry : TypeEntry
{
	[Token(Token = "0x4000E69")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string applicationUrl;

	[Token(Token = "0x4000E6A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Type obj_type;

	[Token(Token = "0x17000329")]
	public string ApplicationUrl
	{
		[Token(Token = "0x6001C11")]
		[Address(RVA = "0x4E79B70", Offset = "0x4E79B70", VA = "0x4E79B70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700032A")]
	public IContextAttribute[] ContextAttributes
	{
		[Token(Token = "0x6001C12")]
		[Address(RVA = "0x4E79B80", Offset = "0x4E79B80", VA = "0x4E79B80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700032B")]
	public Type ObjectType
	{
		[Token(Token = "0x6001C13")]
		[Address(RVA = "0x4E79B90", Offset = "0x4E79B90", VA = "0x4E79B90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001C10")]
	[Address(RVA = "0x4E79A20", Offset = "0x4E79A20", VA = "0x4E79A20")]
	public ActivatedClientTypeEntry(string typeName, string assemblyName, string appUrl)
	{
	}

	[Token(Token = "0x6001C14")]
	[Address(RVA = "0x4E79BA0", Offset = "0x4E79BA0", VA = "0x4E79BA0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
