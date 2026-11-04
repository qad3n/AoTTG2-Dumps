// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.InstanceTypeInfo
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.Rendering;

[Token(Token = "0x200009F")]
internal static class InstanceTypeInfo
{
	[Token(Token = "0x4000305")]
	public const int kInstanceTypeBitCount = 1;

	[Token(Token = "0x4000306")]
	public const int kMaxInstanceTypesCount = 2;

	[Token(Token = "0x4000307")]
	public const uint kInstanceTypeMask = 1u;

	[Token(Token = "0x4000308")]
	[FieldOffset(Offset = "0x0")]
	private static InstanceType[] s_ParentTypes;

	[Token(Token = "0x4000309")]
	[FieldOffset(Offset = "0x8")]
	private static List<InstanceType>[] s_ChildTypes;

	[Token(Token = "0x60002E9")]
	[Address(RVA = "0x2BF1390", Offset = "0x2BEF990", VA = "0x182BF1390")]
	static InstanceTypeInfo()
	{
	}

	[Token(Token = "0x60002EA")]
	[Address(RVA = "0x2BF11A0", Offset = "0x2BEF7A0", VA = "0x182BF11A0")]
	private static void InitParentTypes()
	{
	}

	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x2BF0F80", Offset = "0x2BEF580", VA = "0x182BF0F80")]
	private static void InitChildTypes()
	{
	}

	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x2BF0D70", Offset = "0x2BEF370", VA = "0x182BF0D70")]
	private static InstanceType GetMaxChildTypeRecursively(InstanceType type)
	{
		return default(InstanceType);
	}

	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x2BF0B40", Offset = "0x2BEF140", VA = "0x182BF0B40")]
	private static void FlattenChildInstanceTypes(InstanceType instanceType, NativeList<InstanceType> instanceTypes)
	{
	}

	[Token(Token = "0x60002EE")]
	[Address(RVA = "0x2BF1270", Offset = "0x2BEF870", VA = "0x182BF1270")]
	private static void ValidateTypeRelationsAreCorrectlySorted()
	{
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x2BF0F10", Offset = "0x2BEF510", VA = "0x182BF0F10")]
	public static InstanceType GetParentType(InstanceType type)
	{
		return default(InstanceType);
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x2BF0D00", Offset = "0x2BEF300", VA = "0x182BF0D00")]
	public static List<InstanceType> GetChildTypes(InstanceType type)
	{
		return null;
	}
}
