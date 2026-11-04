// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LayerMask
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x20001A5")]
[UnityEngine.Scripting.RequiredByNativeCode(Optional = true, GenerateProxy = true)]
[UnityEngine.Bindings.NativeHeader("Runtime/BaseClasses/TagManager.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/BaseClasses/BitField.h")]
[UnityEngine.NativeClass("BitField", "struct BitField;")]
public struct LayerMask
{
	[Token(Token = "0x4000622")]
	[FieldOffset(Offset = "0x0")]
	[UnityEngine.Bindings.NativeName("m_Bits")]
	private int m_Mask;

	[Token(Token = "0x1700023E")]
	public int value
	{
		[Token(Token = "0x6000DD5")]
		[Address(RVA = "0xD18930", Offset = "0xD16F30", VA = "0x180D18930")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000DD6")]
		[Address(RVA = "0x57AF10", Offset = "0x579510", VA = "0x18057AF10")]
		set
		{
		}
	}

	[Token(Token = "0x6000DD3")]
	[Address(RVA = "0x2F1B9D0", Offset = "0x2F19FD0", VA = "0x182F1B9D0")]
	public static implicit operator int(LayerMask mask)
	{
		return default(int);
	}

	[Token(Token = "0x6000DD4")]
	[Address(RVA = "0x2F1B9D0", Offset = "0x2F19FD0", VA = "0x182F1B9D0")]
	public static implicit operator LayerMask(int intVal)
	{
		return default(LayerMask);
	}

	[Token(Token = "0x6000DD7")]
	[Address(RVA = "0x2F1B840", Offset = "0x2F19E40", VA = "0x182F1B840")]
	[UnityEngine.Bindings.StaticAccessor("GetTagManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
	[UnityEngine.Bindings.NativeMethod("StringToLayer")]
	public static int NameToLayer(string layerName)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DD8")]
	[Address(RVA = "0x2F1B800", Offset = "0x2F19E00", VA = "0x182F1B800")]
	private static extern int NameToLayer_Injected(ref ManagedSpanWrapper layerName);
}
