// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.RenderingLayerMask
// Update status: unchanged since the previous dump
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
[Token(Token = "0x2000166")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/RenderingLayerMask.h")]
[UnityEngine.NativeClass("RenderingLayerMask", "struct RenderingLayerMask;")]
[UnityEngine.Bindings.NativeHeader("Runtime/BaseClasses/TagManager.h")]
[UnityEngine.Scripting.RequiredByNativeCode(Optional = true, GenerateProxy = true)]
public struct RenderingLayerMask
{
	[Token(Token = "0x40005B6")]
	[FieldOffset(Offset = "0x0")]
	[UnityEngine.Bindings.NativeName("m_Bits")]
	private uint m_Bits;

	[Token(Token = "0x40005B8")]
	internal const int maxRenderingLayerSize = 32;

	[Token(Token = "0x17000218")]
	public static RenderingLayerMask defaultRenderingLayerMask
	{
		[Token(Token = "0x6000C6D")]
		[Address(RVA = "0x690E4D0", Offset = "0x690D4D0", VA = "0x690E4D0")]
		[CompilerGenerated]
		get
		{
			return default(RenderingLayerMask);
		}
	}

	[Token(Token = "0x6000C6E")]
	[Address(RVA = "0x690E540", Offset = "0x690D540", VA = "0x690E540")]
	public static implicit operator uint(RenderingLayerMask mask)
	{
		return default(uint);
	}

	[Token(Token = "0x6000C6F")]
	[Address(RVA = "0x690E550", Offset = "0x690D550", VA = "0x690E550")]
	public static implicit operator RenderingLayerMask(uint intVal)
	{
		return default(RenderingLayerMask);
	}

	[Token(Token = "0x6000C70")]
	[Address(RVA = "0x690E560", Offset = "0x690D560", VA = "0x690E560")]
	public static implicit operator int(RenderingLayerMask mask)
	{
		return default(int);
	}

	[Token(Token = "0x6000C71")]
	[Address(RVA = "0x690E570", Offset = "0x690D570", VA = "0x690E570")]
	public static implicit operator RenderingLayerMask(int intVal)
	{
		return default(RenderingLayerMask);
	}

	[Token(Token = "0x6000C72")]
	[Address(RVA = "0x690E580", Offset = "0x690D580", VA = "0x690E580")]
	[UnityEngine.Bindings.StaticAccessor("GetTagManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
	[UnityEngine.Bindings.NativeMethod("RenderingLayerToString")]
	public static string RenderingLayerToName(int layer)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C73")]
	[Address(RVA = "0x690E6C0", Offset = "0x690D6C0", VA = "0x690E6C0")]
	[UnityEngine.Bindings.StaticAccessor("GetTagManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
	public static extern int GetDefinedRenderingLayerCount();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C74")]
	[Address(RVA = "0x690E6F0", Offset = "0x690D6F0", VA = "0x690E6F0")]
	[UnityEngine.Bindings.StaticAccessor("GetTagManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
	public static extern uint GetDefinedRenderingLayersCombinedMaskValue();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C75")]
	[Address(RVA = "0x690E720", Offset = "0x690D720", VA = "0x690E720")]
	[UnityEngine.Bindings.StaticAccessor("GetTagManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
	public static extern string[] GetDefinedRenderingLayerNames();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C76")]
	[Address(RVA = "0x690E750", Offset = "0x690D750", VA = "0x690E750")]
	[UnityEngine.Bindings.StaticAccessor("GetTagManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
	public static extern int GetRenderingLayerCount();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C78")]
	[Address(RVA = "0x690E680", Offset = "0x690D680", VA = "0x690E680")]
	private static extern void RenderingLayerToName_Injected(int layer, out ManagedSpanWrapper ret);
}
