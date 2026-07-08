using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x20000F5")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/Mesh/SkinnedMeshRenderer.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
public class SkinnedMeshRenderer : Renderer
{
	[Token(Token = "0x17000105")]
	public SkinQuality quality
	{
		[Token(Token = "0x6000520")]
		[Address(RVA = "0x4AA85D0", Offset = "0x4AA85D0", VA = "0x4AA85D0")]
		get
		{
			return default(SkinQuality);
		}
		[Token(Token = "0x6000521")]
		[Address(RVA = "0x4AA86A0", Offset = "0x4AA86A0", VA = "0x4AA86A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000106")]
	public bool updateWhenOffscreen
	{
		[Token(Token = "0x6000522")]
		[Address(RVA = "0x4AA8780", Offset = "0x4AA8780", VA = "0x4AA8780")]
		set
		{
		}
	}

	[Token(Token = "0x17000107")]
	public Transform rootBone
	{
		[Token(Token = "0x6000523")]
		[Address(RVA = "0x4AA8860", Offset = "0x4AA8860", VA = "0x4AA8860")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000524")]
		[Address(RVA = "0x4AA8930", Offset = "0x4AA8930", VA = "0x4AA8930")]
		set
		{
		}
	}

	[Token(Token = "0x17000108")]
	public Transform[] bones
	{
		[Token(Token = "0x6000525")]
		[Address(RVA = "0x4AA8A70", Offset = "0x4AA8A70", VA = "0x4AA8A70")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000526")]
		[Address(RVA = "0x4AA8B40", Offset = "0x4AA8B40", VA = "0x4AA8B40")]
		set
		{
		}
	}

	[Token(Token = "0x17000109")]
	[UnityEngine.Bindings.NativeProperty("Mesh")]
	public Mesh sharedMesh
	{
		[Token(Token = "0x6000527")]
		[Address(RVA = "0x4AA8C20", Offset = "0x4AA8C20", VA = "0x4AA8C20")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000528")]
		[Address(RVA = "0x4AA8CF0", Offset = "0x4AA8CF0", VA = "0x4AA8CF0")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000529")]
	[Address(RVA = "0x4AA8670", Offset = "0x4AA8670", VA = "0x4AA8670")]
	private static extern SkinQuality get_quality_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600052A")]
	[Address(RVA = "0x4AA8740", Offset = "0x4AA8740", VA = "0x4AA8740")]
	private static extern void set_quality_Injected(IntPtr _unity_self, SkinQuality value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600052B")]
	[Address(RVA = "0x4AA8820", Offset = "0x4AA8820", VA = "0x4AA8820")]
	private static extern void set_updateWhenOffscreen_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600052C")]
	[Address(RVA = "0x4AA8900", Offset = "0x4AA8900", VA = "0x4AA8900")]
	private static extern Transform get_rootBone_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600052D")]
	[Address(RVA = "0x4AA8A30", Offset = "0x4AA8A30", VA = "0x4AA8A30")]
	private static extern void set_rootBone_Injected(IntPtr _unity_self, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600052E")]
	[Address(RVA = "0x4AA8B10", Offset = "0x4AA8B10", VA = "0x4AA8B10")]
	private static extern Transform[] get_bones_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600052F")]
	[Address(RVA = "0x4AA8BE0", Offset = "0x4AA8BE0", VA = "0x4AA8BE0")]
	private static extern void set_bones_Injected(IntPtr _unity_self, Transform[] value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000530")]
	[Address(RVA = "0x4AA8CC0", Offset = "0x4AA8CC0", VA = "0x4AA8CC0")]
	private static extern Mesh get_sharedMesh_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000531")]
	[Address(RVA = "0x4AA8DF0", Offset = "0x4AA8DF0", VA = "0x4AA8DF0")]
	private static extern void set_sharedMesh_Injected(IntPtr _unity_self, IntPtr value);
}
