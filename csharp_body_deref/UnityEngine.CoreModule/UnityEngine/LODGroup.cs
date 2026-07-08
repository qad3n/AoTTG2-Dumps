using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x20000F9")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/LOD/LODUtility.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/LOD/LODGroup.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/LOD/LODGroupManager.h")]
[UnityEngine.Bindings.StaticAccessor("GetLODGroupManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
public class LODGroup : Component
{
	[Token(Token = "0x1700010A")]
	public LODFadeMode fadeMode
	{
		[Token(Token = "0x6000534")]
		[Address(RVA = "0x4AA8E60", Offset = "0x4AA8E60", VA = "0x4AA8E60")]
		set
		{
		}
	}

	[Token(Token = "0x1700010B")]
	public bool animateCrossFading
	{
		[Token(Token = "0x6000535")]
		[Address(RVA = "0x4AA8F40", Offset = "0x4AA8F40", VA = "0x4AA8F40")]
		set
		{
		}
	}

	[Token(Token = "0x6000536")]
	[Address(RVA = "0x4AA9020", Offset = "0x4AA9020", VA = "0x4AA9020")]
	[UnityEngine.Bindings.FreeFunction("UpdateLODGroupBoundingBox", HasExplicitThis = true)]
	public void RecalculateBounds()
	{
	}

	[Token(Token = "0x6000537")]
	[Address(RVA = "0x4AA90F0", Offset = "0x4AA90F0", VA = "0x4AA90F0")]
	[UnityEngine.Bindings.FreeFunction("GetLODs_Binding", HasExplicitThis = true)]
	public LOD[] GetLODs()
	{
		return null;
	}

	[Token(Token = "0x6000538")]
	[Address(RVA = "0x4AA91C0", Offset = "0x4AA91C0", VA = "0x4AA91C0")]
	[UnityEngine.Bindings.FreeFunction("SetLODs_Binding", HasExplicitThis = true)]
	public void SetLODs([UnityEngine.Bindings.Unmarshalled] LOD[] lods)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000539")]
	[Address(RVA = "0x4AA8F00", Offset = "0x4AA8F00", VA = "0x4AA8F00")]
	private static extern void set_fadeMode_Injected(IntPtr _unity_self, LODFadeMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600053A")]
	[Address(RVA = "0x4AA8FE0", Offset = "0x4AA8FE0", VA = "0x4AA8FE0")]
	private static extern void set_animateCrossFading_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600053B")]
	[Address(RVA = "0x4AA90C0", Offset = "0x4AA90C0", VA = "0x4AA90C0")]
	private static extern void RecalculateBounds_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600053C")]
	[Address(RVA = "0x4AA9190", Offset = "0x4AA9190", VA = "0x4AA9190")]
	private static extern LOD[] GetLODs_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600053D")]
	[Address(RVA = "0x4AA9260", Offset = "0x4AA9260", VA = "0x4AA9260")]
	private static extern void SetLODs_Injected(IntPtr _unity_self, LOD[] lods);
}
