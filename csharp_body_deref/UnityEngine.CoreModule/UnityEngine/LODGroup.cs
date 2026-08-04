// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LODGroup
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x20000FB")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/LOD/LODUtility.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/LOD/LODGroup.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/LOD/LODGroupManager.h")]
[UnityEngine.Bindings.StaticAccessor("GetLODGroupManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
public class LODGroup : Component
{
	[Token(Token = "0x1700010B")]
	public LODFadeMode fadeMode
	{
		[Token(Token = "0x6000536")]
		[Address(RVA = "0x4DD0790", Offset = "0x4DD0790", VA = "0x4DD0790")]
		set
		{
		}
	}

	[Token(Token = "0x1700010C")]
	public bool animateCrossFading
	{
		[Token(Token = "0x6000537")]
		[Address(RVA = "0x4DD0870", Offset = "0x4DD0870", VA = "0x4DD0870")]
		set
		{
		}
	}

	[Token(Token = "0x6000538")]
	[Address(RVA = "0x4DD0950", Offset = "0x4DD0950", VA = "0x4DD0950")]
	[UnityEngine.Bindings.FreeFunction("UpdateLODGroupBoundingBox", HasExplicitThis = true)]
	public void RecalculateBounds()
	{
	}

	[Token(Token = "0x6000539")]
	[Address(RVA = "0x4DD0A20", Offset = "0x4DD0A20", VA = "0x4DD0A20")]
	[UnityEngine.Bindings.FreeFunction("GetLODs_Binding", HasExplicitThis = true)]
	public LOD[] GetLODs()
	{
		return null;
	}

	[Token(Token = "0x600053A")]
	[Address(RVA = "0x4DD0AF0", Offset = "0x4DD0AF0", VA = "0x4DD0AF0")]
	[UnityEngine.Bindings.FreeFunction("SetLODs_Binding", HasExplicitThis = true)]
	public void SetLODs([UnityEngine.Bindings.Unmarshalled] LOD[] lods)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600053B")]
	[Address(RVA = "0x4DD0830", Offset = "0x4DD0830", VA = "0x4DD0830")]
	private static extern void set_fadeMode_Injected(IntPtr _unity_self, LODFadeMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600053C")]
	[Address(RVA = "0x4DD0910", Offset = "0x4DD0910", VA = "0x4DD0910")]
	private static extern void set_animateCrossFading_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600053D")]
	[Address(RVA = "0x4DD09F0", Offset = "0x4DD09F0", VA = "0x4DD09F0")]
	private static extern void RecalculateBounds_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600053E")]
	[Address(RVA = "0x4DD0AC0", Offset = "0x4DD0AC0", VA = "0x4DD0AC0")]
	private static extern LOD[] GetLODs_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600053F")]
	[Address(RVA = "0x4DD0B90", Offset = "0x4DD0B90", VA = "0x4DD0B90")]
	private static extern void SetLODs_Injected(IntPtr _unity_self, LOD[] lods);
}
