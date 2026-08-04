// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.ClipperRegistry
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4EF1980", Offset = "0x4EF1980", VA = "0x4EF1980")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x4EF3110", Offset = "0x4EF3110", VA = "0x4EF3110")]
	protected ClipperRegistry()
	{
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x4EF1A70", Offset = "0x4EF1A70", VA = "0x4EF1A70")]
	public void Cull()
	{
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x4EF3190", Offset = "0x4EF3190", VA = "0x4EF3190")]
	public static void Register(IClipper c)
	{
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x4EF31F0", Offset = "0x4EF31F0", VA = "0x4EF31F0")]
	public static void Unregister(IClipper c)
	{
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x4EF3240", Offset = "0x4EF3240", VA = "0x4EF3240")]
	public static void Disable(IClipper c)
	{
	}
}
