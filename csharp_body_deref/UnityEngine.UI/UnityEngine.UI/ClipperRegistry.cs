using Il2CppDummyDll;
using UnityEngine.UI.Collections;

namespace UnityEngine.UI;

[Token(Token = "0x200000C")]
public class ClipperRegistry
{
	[Token(Token = "0x400002D")]
	[FieldOffset(Offset = "0x0")]
	private static ClipperRegistry s_Instance;

	[Token(Token = "0x400002E")]
	[FieldOffset(Offset = "0x10")]
	private readonly IndexedSet<IClipper> m_Clippers;

	[Token(Token = "0x17000012")]
	public static ClipperRegistry instance
	{
		[Token(Token = "0x600004C")]
		[Address(RVA = "0x4BCA050", Offset = "0x4BCA050", VA = "0x4BCA050")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x4BCB7E0", Offset = "0x4BCB7E0", VA = "0x4BCB7E0")]
	protected ClipperRegistry()
	{
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x4BCA140", Offset = "0x4BCA140", VA = "0x4BCA140")]
	public void Cull()
	{
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x4BCB860", Offset = "0x4BCB860", VA = "0x4BCB860")]
	public static void Register(IClipper c)
	{
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x4BCB8C0", Offset = "0x4BCB8C0", VA = "0x4BCB8C0")]
	public static void Unregister(IClipper c)
	{
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x4BCB910", Offset = "0x4BCB910", VA = "0x4BCB910")]
	public static void Disable(IClipper c)
	{
	}
}
