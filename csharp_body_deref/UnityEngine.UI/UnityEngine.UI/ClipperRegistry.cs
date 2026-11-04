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
		[Address(RVA = "0x30639F0", Offset = "0x3061FF0", VA = "0x1830639F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x3063970", Offset = "0x3061F70", VA = "0x183063970")]
	protected ClipperRegistry()
	{
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x3063720", Offset = "0x3061D20", VA = "0x183063720")]
	public void Cull()
	{
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x30638A0", Offset = "0x3061EA0", VA = "0x1830638A0")]
	public static void Register(IClipper c)
	{
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x3063910", Offset = "0x3061F10", VA = "0x183063910")]
	public static void Unregister(IClipper c)
	{
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x3063840", Offset = "0x3061E40", VA = "0x183063840")]
	public static void Disable(IClipper c)
	{
	}
}
