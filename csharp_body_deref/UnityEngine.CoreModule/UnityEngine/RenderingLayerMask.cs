// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.RenderingLayerMask
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Serializable]
[Token(Token = "0x2000165")]
[UnityEngine.NativeClass("RenderingLayerMask", "struct RenderingLayerMask;")]
[UnityEngine.Bindings.NativeHeader("Runtime/BaseClasses/TagManager.h")]
[UnityEngine.Scripting.RequiredByNativeCode(Optional = true, GenerateProxy = true)]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/RenderingLayerMask.h")]
public struct RenderingLayerMask
{
	[Token(Token = "0x40005B1")]
	[FieldOffset(Offset = "0x0")]
	[UnityEngine.Bindings.NativeName("m_Bits")]
	private uint m_Bits;

	[Token(Token = "0x40005B3")]
	internal const int maxRenderingLayerSize = 32;

	[Token(Token = "0x17000213")]
	public static RenderingLayerMask defaultRenderingLayerMask
	{
		[Token(Token = "0x6000C5B")]
		[Address(RVA = "0x2F252B0", Offset = "0x2F238B0", VA = "0x182F252B0")]
		[CompilerGenerated]
		get
		{
			return default(RenderingLayerMask);
		}
	}

	[Token(Token = "0x6000C5C")]
	[Address(RVA = "0x2F1B9D0", Offset = "0x2F19FD0", VA = "0x182F1B9D0")]
	public static implicit operator uint(RenderingLayerMask mask)
	{
		return default(uint);
	}

	[Token(Token = "0x6000C5D")]
	[Address(RVA = "0x2F1B9D0", Offset = "0x2F19FD0", VA = "0x182F1B9D0")]
	public static implicit operator RenderingLayerMask(uint intVal)
	{
		return default(RenderingLayerMask);
	}

	[Token(Token = "0x6000C5E")]
	[Address(RVA = "0x2F1B9D0", Offset = "0x2F19FD0", VA = "0x182F1B9D0")]
	public static implicit operator int(RenderingLayerMask mask)
	{
		return default(int);
	}

	[Token(Token = "0x6000C5F")]
	[Address(RVA = "0x2F1B9D0", Offset = "0x2F19FD0", VA = "0x182F1B9D0")]
	public static implicit operator RenderingLayerMask(int intVal)
	{
		return default(RenderingLayerMask);
	}

	[Token(Token = "0x6000C60")]
	[Address(RVA = "0x2F25180", Offset = "0x2F23780", VA = "0x182F25180")]
	[UnityEngine.Bindings.NativeMethod("RenderingLayerToString")]
	[UnityEngine.Bindings.StaticAccessor("GetTagManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
	public static string RenderingLayerToName(int layer)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C61")]
	[Address(RVA = "0x2F25080", Offset = "0x2F23680", VA = "0x182F25080")]
	[UnityEngine.Bindings.StaticAccessor("GetTagManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
	public static extern int GetDefinedRenderingLayerCount();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C62")]
	[Address(RVA = "0x2F250E0", Offset = "0x2F236E0", VA = "0x182F250E0")]
	[UnityEngine.Bindings.StaticAccessor("GetTagManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
	public static extern uint GetDefinedRenderingLayersCombinedMaskValue();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C63")]
	[Address(RVA = "0x2F250B0", Offset = "0x2F236B0", VA = "0x182F250B0")]
	[UnityEngine.Bindings.StaticAccessor("GetTagManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
	public static extern string[] GetDefinedRenderingLayerNames();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C64")]
	[Address(RVA = "0x2F25110", Offset = "0x2F23710", VA = "0x182F25110")]
	[UnityEngine.Bindings.StaticAccessor("GetTagManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
	public static extern int GetRenderingLayerCount();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C66")]
	[Address(RVA = "0x2F25140", Offset = "0x2F23740", VA = "0x182F25140")]
	private static extern void RenderingLayerToName_Injected(int layer, out ManagedSpanWrapper ret);
}
