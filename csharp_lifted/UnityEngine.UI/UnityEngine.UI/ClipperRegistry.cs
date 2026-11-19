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

[Token(Token = "0x200000A")]
public class ClipperRegistry
{
	[Token(Token = "0x4000028")]
	[FieldOffset(Offset = "0x0")]
	private static ClipperRegistry s_Instance;

	[Token(Token = "0x4000029")]
	[FieldOffset(Offset = "0x10")]
	private readonly IndexedSet<IClipper> m_Clippers;

	[Token(Token = "0x17000012")]
	public static ClipperRegistry instance
	{
		[Token(Token = "0x600004A")]
		[Address(RVA = "0x6A5EBB0", Offset = "0x6A5DBB0", VA = "0x6A5EBB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x6A60240", Offset = "0x6A5F240", VA = "0x6A60240")]
	protected ClipperRegistry()
	{
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x6A5ECA0", Offset = "0x6A5DCA0", VA = "0x6A5ECA0")]
	public void Cull()
	{
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x6A602C0", Offset = "0x6A5F2C0", VA = "0x6A602C0")]
	public static void Register(IClipper c)
	{
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x6A60320", Offset = "0x6A5F320", VA = "0x6A60320")]
	public static void Unregister(IClipper c)
	{
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x6A60370", Offset = "0x6A5F370", VA = "0x6A60370")]
	public static void Disable(IClipper c)
	{
	}
}
