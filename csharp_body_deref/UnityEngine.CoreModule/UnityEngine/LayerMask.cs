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

[Token(Token = "0x2000171")]
[UnityEngine.Scripting.RequiredByNativeCode(Optional = true, GenerateProxy = true)]
[UnityEngine.Bindings.NativeHeader("Runtime/BaseClasses/BitField.h")]
[UnityEngine.NativeClass("BitField", "struct BitField;")]
[UnityEngine.Bindings.NativeHeader("Runtime/BaseClasses/TagManager.h")]
public struct LayerMask
{
	[Token(Token = "0x4000591")]
	[FieldOffset(Offset = "0x0")]
	[UnityEngine.Bindings.NativeName("m_Bits")]
	private int m_Mask;

	[Token(Token = "0x170001D0")]
	public int value
	{
		[Token(Token = "0x6000A81")]
		[Address(RVA = "0x4DFC700", Offset = "0x4DFC700", VA = "0x4DFC700")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000A82")]
		[Address(RVA = "0x4DFC710", Offset = "0x4DFC710", VA = "0x4DFC710")]
		set
		{
		}
	}

	[Token(Token = "0x6000A7F")]
	[Address(RVA = "0x4DFC6E0", Offset = "0x4DFC6E0", VA = "0x4DFC6E0")]
	public static implicit operator int(LayerMask mask)
	{
		return default(int);
	}

	[Token(Token = "0x6000A80")]
	[Address(RVA = "0x4DFC6F0", Offset = "0x4DFC6F0", VA = "0x4DFC6F0")]
	public static implicit operator LayerMask(int intVal)
	{
		return default(LayerMask);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A83")]
	[Address(RVA = "0x4DFC720", Offset = "0x4DFC720", VA = "0x4DFC720")]
	[UnityEngine.Bindings.NativeMethod("StringToLayer")]
	[UnityEngine.Bindings.StaticAccessor("GetTagManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
	public static extern int NameToLayer(string layerName);
}
