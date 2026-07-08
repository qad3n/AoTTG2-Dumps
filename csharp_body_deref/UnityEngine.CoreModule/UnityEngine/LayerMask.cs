using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x200016E")]
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

	[Token(Token = "0x170001CF")]
	public int value
	{
		[Token(Token = "0x6000A7F")]
		[Address(RVA = "0x4AD4DD0", Offset = "0x4AD4DD0", VA = "0x4AD4DD0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000A80")]
		[Address(RVA = "0x4AD4DE0", Offset = "0x4AD4DE0", VA = "0x4AD4DE0")]
		set
		{
		}
	}

	[Token(Token = "0x6000A7D")]
	[Address(RVA = "0x4AD4DB0", Offset = "0x4AD4DB0", VA = "0x4AD4DB0")]
	public static implicit operator int(LayerMask mask)
	{
		return default(int);
	}

	[Token(Token = "0x6000A7E")]
	[Address(RVA = "0x4AD4DC0", Offset = "0x4AD4DC0", VA = "0x4AD4DC0")]
	public static implicit operator LayerMask(int intVal)
	{
		return default(LayerMask);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A81")]
	[Address(RVA = "0x4AD4DF0", Offset = "0x4AD4DF0", VA = "0x4AD4DF0")]
	[UnityEngine.Bindings.NativeMethod("StringToLayer")]
	[UnityEngine.Bindings.StaticAccessor("GetTagManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
	public static extern int NameToLayer(string layerName);
}
