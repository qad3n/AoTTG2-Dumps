// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.SkinnedMeshRenderer
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

[Token(Token = "0x20000F7")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/Mesh/SkinnedMeshRenderer.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
public class SkinnedMeshRenderer : Renderer
{
	[Token(Token = "0x17000106")]
	public SkinQuality quality
	{
		[Token(Token = "0x6000522")]
		[Address(RVA = "0x4DCFF00", Offset = "0x4DCFF00", VA = "0x4DCFF00")]
		get
		{
			return default(SkinQuality);
		}
		[Token(Token = "0x6000523")]
		[Address(RVA = "0x4DCFFD0", Offset = "0x4DCFFD0", VA = "0x4DCFFD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000107")]
	public bool updateWhenOffscreen
	{
		[Token(Token = "0x6000524")]
		[Address(RVA = "0x4DD00B0", Offset = "0x4DD00B0", VA = "0x4DD00B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000108")]
	public Transform rootBone
	{
		[Token(Token = "0x6000525")]
		[Address(RVA = "0x4DD0190", Offset = "0x4DD0190", VA = "0x4DD0190")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000526")]
		[Address(RVA = "0x4DD0260", Offset = "0x4DD0260", VA = "0x4DD0260")]
		set
		{
		}
	}

	[Token(Token = "0x17000109")]
	public Transform[] bones
	{
		[Token(Token = "0x6000527")]
		[Address(RVA = "0x4DD03A0", Offset = "0x4DD03A0", VA = "0x4DD03A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000528")]
		[Address(RVA = "0x4DD0470", Offset = "0x4DD0470", VA = "0x4DD0470")]
		set
		{
		}
	}

	[Token(Token = "0x1700010A")]
	[UnityEngine.Bindings.NativeProperty("Mesh")]
	public Mesh sharedMesh
	{
		[Token(Token = "0x6000529")]
		[Address(RVA = "0x4DD0550", Offset = "0x4DD0550", VA = "0x4DD0550")]
		get
		{
			return null;
		}
		[Token(Token = "0x600052A")]
		[Address(RVA = "0x4DD0620", Offset = "0x4DD0620", VA = "0x4DD0620")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600052B")]
	[Address(RVA = "0x4DCFFA0", Offset = "0x4DCFFA0", VA = "0x4DCFFA0")]
	private static extern SkinQuality get_quality_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600052C")]
	[Address(RVA = "0x4DD0070", Offset = "0x4DD0070", VA = "0x4DD0070")]
	private static extern void set_quality_Injected(IntPtr _unity_self, SkinQuality value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600052D")]
	[Address(RVA = "0x4DD0150", Offset = "0x4DD0150", VA = "0x4DD0150")]
	private static extern void set_updateWhenOffscreen_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600052E")]
	[Address(RVA = "0x4DD0230", Offset = "0x4DD0230", VA = "0x4DD0230")]
	private static extern Transform get_rootBone_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600052F")]
	[Address(RVA = "0x4DD0360", Offset = "0x4DD0360", VA = "0x4DD0360")]
	private static extern void set_rootBone_Injected(IntPtr _unity_self, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000530")]
	[Address(RVA = "0x4DD0440", Offset = "0x4DD0440", VA = "0x4DD0440")]
	private static extern Transform[] get_bones_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000531")]
	[Address(RVA = "0x4DD0510", Offset = "0x4DD0510", VA = "0x4DD0510")]
	private static extern void set_bones_Injected(IntPtr _unity_self, Transform[] value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000532")]
	[Address(RVA = "0x4DD05F0", Offset = "0x4DD05F0", VA = "0x4DD05F0")]
	private static extern Mesh get_sharedMesh_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000533")]
	[Address(RVA = "0x4DD0720", Offset = "0x4DD0720", VA = "0x4DD0720")]
	private static extern void set_sharedMesh_Injected(IntPtr _unity_self, IntPtr value);
}
