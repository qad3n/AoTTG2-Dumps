using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Remoting;

[Token(Token = "0x2000354")]
[ComVisible(true)]
public class TypeEntry
{
	[Token(Token = "0x4000EBC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private string assembly_name;

	[Token(Token = "0x4000EBD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string type_name;

	[Token(Token = "0x1700034B")]
	public string AssemblyName
	{
		[Token(Token = "0x6001CD6")]
		[Address(RVA = "0x4E8AE00", Offset = "0x4E8AE00", VA = "0x4E8AE00")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001CD7")]
		[Address(RVA = "0x4E8AE10", Offset = "0x4E8AE10", VA = "0x4E8AE10")]
		set
		{
		}
	}

	[Token(Token = "0x1700034C")]
	public string TypeName
	{
		[Token(Token = "0x6001CD8")]
		[Address(RVA = "0x4E8AE20", Offset = "0x4E8AE20", VA = "0x4E8AE20")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001CD9")]
		[Address(RVA = "0x4E8AE30", Offset = "0x4E8AE30", VA = "0x4E8AE30")]
		set
		{
		}
	}

	[Token(Token = "0x6001CD5")]
	[Address(RVA = "0x4E79B50", Offset = "0x4E79B50", VA = "0x4E79B50")]
	protected TypeEntry()
	{
	}
}
