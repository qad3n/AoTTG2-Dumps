// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.InstanceTypeInfo
// Update status: unchanged since the previous dump
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
	[Address(RVA = "0x65E3F00", Offset = "0x65E2F00", VA = "0x65E3F00")]
	static InstanceTypeInfo()
	{
	}

	[Token(Token = "0x60002EA")]
	[Address(RVA = "0x65E3F20", Offset = "0x65E2F20", VA = "0x65E3F20")]
	private static void InitParentTypes()
	{
	}

	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x65E3FE0", Offset = "0x65E2FE0", VA = "0x65E3FE0")]
	private static void InitChildTypes()
	{
	}

	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x65E44F0", Offset = "0x65E34F0", VA = "0x65E44F0")]
	private static InstanceType GetMaxChildTypeRecursively(InstanceType type)
	{
		return default(InstanceType);
	}

	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x65E4690", Offset = "0x65E3690", VA = "0x65E4690")]
	private static void FlattenChildInstanceTypes(InstanceType instanceType, NativeList<InstanceType> instanceTypes)
	{
	}

	[Token(Token = "0x60002EE")]
	[Address(RVA = "0x65E4350", Offset = "0x65E3350", VA = "0x65E4350")]
	private static void ValidateTypeRelationsAreCorrectlySorted()
	{
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x65E4860", Offset = "0x65E3860", VA = "0x65E4860")]
	public static InstanceType GetParentType(InstanceType type)
	{
		return default(InstanceType);
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x65E48F0", Offset = "0x65E38F0", VA = "0x65E48F0")]
	public static List<InstanceType> GetChildTypes(InstanceType type)
	{
		return null;
	}
}
