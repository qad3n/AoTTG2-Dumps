// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LayerMask
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x20001A6")]
[UnityEngine.NativeClass("BitField", "struct BitField;")]
[UnityEngine.Bindings.NativeHeader("Runtime/BaseClasses/BitField.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/BaseClasses/TagManager.h")]
[UnityEngine.Scripting.RequiredByNativeCode(Optional = true, GenerateProxy = true)]
public struct LayerMask
{
	[Token(Token = "0x4000627")]
	[FieldOffset(Offset = "0x0")]
	[UnityEngine.Bindings.NativeName("m_Bits")]
	private int m_Mask;

	[Token(Token = "0x17000243")]
	public int value
	{
		[Token(Token = "0x6000DE7")]
		[Address(RVA = "0x691AF50", Offset = "0x6919F50", VA = "0x691AF50")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000DE8")]
		[Address(RVA = "0x691AF60", Offset = "0x6919F60", VA = "0x691AF60")]
		set
		{
		}
	}

	[Token(Token = "0x6000DE5")]
	[Address(RVA = "0x691AF30", Offset = "0x6919F30", VA = "0x691AF30")]
	public static implicit operator int(LayerMask mask)
	{
		return default(int);
	}

	[Token(Token = "0x6000DE6")]
	[Address(RVA = "0x691AF40", Offset = "0x6919F40", VA = "0x691AF40")]
	public static implicit operator LayerMask(int intVal)
	{
		return default(LayerMask);
	}

	[Token(Token = "0x6000DE9")]
	[Address(RVA = "0x691AF70", Offset = "0x6919F70", VA = "0x691AF70")]
	[UnityEngine.Bindings.StaticAccessor("GetTagManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
	[UnityEngine.Bindings.NativeMethod("StringToLayer")]
	public static int NameToLayer(string layerName)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DEA")]
	[Address(RVA = "0x691B0D0", Offset = "0x691A0D0", VA = "0x691B0D0")]
	private static extern int NameToLayer_Injected(ref ManagedSpanWrapper layerName);
}
