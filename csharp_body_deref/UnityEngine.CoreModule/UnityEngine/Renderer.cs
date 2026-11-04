// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Renderer
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Rendering;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x20000E1")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/GraphicsScriptBindings.h")]
[RequireComponent(typeof(Transform))]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/Renderer.h")]
public class Renderer : Component
{
	[Token(Token = "0x170000F4")]
	public Bounds bounds
	{
		[Token(Token = "0x6000571")]
		[Address(RVA = "0x2EF5580", Offset = "0x2EF3B80", VA = "0x182EF5580")]
		[UnityEngine.Bindings.FreeFunction(Name = "RendererScripting::GetWorldBounds", HasExplicitThis = true)]
		get
		{
			return default(Bounds);
		}
	}

	[Token(Token = "0x170000F5")]
	public Bounds localBounds
	{
		[Token(Token = "0x6000572")]
		[Address(RVA = "0x2EF58B0", Offset = "0x2EF3EB0", VA = "0x182EF58B0")]
		[UnityEngine.Bindings.FreeFunction(Name = "RendererScripting::GetLocalBounds", HasExplicitThis = true)]
		get
		{
			return default(Bounds);
		}
		[Token(Token = "0x6000573")]
		[Address(RVA = "0x2EF61B0", Offset = "0x2EF47B0", VA = "0x182EF61B0")]
		[UnityEngine.Bindings.NativeName("SetLocalAABB")]
		set
		{
		}
	}

	[Token(Token = "0x170000F6")]
	public bool enabled
	{
		[Token(Token = "0x600057F")]
		[Address(RVA = "0x2EF5660", Offset = "0x2EF3C60", VA = "0x182EF5660")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000580")]
		[Address(RVA = "0x2EF5FF0", Offset = "0x2EF45F0", VA = "0x182EF5FF0")]
		set
		{
		}
	}

	[Token(Token = "0x170000F7")]
	public bool isVisible
	{
		[Token(Token = "0x6000581")]
		[Address(RVA = "0x2EF57E0", Offset = "0x2EF3DE0", VA = "0x182EF57E0")]
		[UnityEngine.Bindings.NativeName("IsVisibleInScene")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F8")]
	public ShadowCastingMode shadowCastingMode
	{
		[Token(Token = "0x6000582")]
		[Address(RVA = "0x2EF5B40", Offset = "0x2EF4140", VA = "0x182EF5B40")]
		get
		{
			return default(ShadowCastingMode);
		}
		[Token(Token = "0x6000583")]
		[Address(RVA = "0x2EF6360", Offset = "0x2EF4960", VA = "0x182EF6360")]
		set
		{
		}
	}

	[Token(Token = "0x170000F9")]
	public bool receiveShadows
	{
		[Token(Token = "0x6000584")]
		[Address(RVA = "0x2EF5A80", Offset = "0x2EF4080", VA = "0x182EF5A80")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000585")]
		[Address(RVA = "0x2EF6290", Offset = "0x2EF4890", VA = "0x182EF6290")]
		set
		{
		}
	}

	[Token(Token = "0x170000FA")]
	public bool forceRenderingOff
	{
		[Token(Token = "0x6000586")]
		[Address(RVA = "0x2EF5720", Offset = "0x2EF3D20", VA = "0x182EF5720")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000587")]
		[Address(RVA = "0x2EF60D0", Offset = "0x2EF46D0", VA = "0x182EF60D0")]
		set
		{
		}
	}

	[Token(Token = "0x170000FB")]
	internal bool allowGPUDrivenRendering
	{
		[Token(Token = "0x6000588")]
		[Address(RVA = "0x2EF5F10", Offset = "0x2EF4510", VA = "0x182EF5F10")]
		set
		{
		}
	}

	[Token(Token = "0x170000FC")]
	internal bool smallMeshCulling
	{
		[Token(Token = "0x6000589")]
		[Address(RVA = "0x2EF6440", Offset = "0x2EF4A40", VA = "0x182EF6440")]
		set
		{
		}
	}

	[Token(Token = "0x170000FD")]
	public bool staticShadowCaster
	{
		[Token(Token = "0x600058B")]
		[Address(RVA = "0x2EF5020", Offset = "0x2EF3620", VA = "0x182EF5020")]
		set
		{
		}
	}

	[Token(Token = "0x170000FE")]
	public int sortingLayerID
	{
		[Token(Token = "0x600058C")]
		[Address(RVA = "0x2EF5D80", Offset = "0x2EF4380", VA = "0x182EF5D80")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600058D")]
		[Address(RVA = "0x2EF6510", Offset = "0x2EF4B10", VA = "0x182EF6510")]
		set
		{
		}
	}

	[Token(Token = "0x170000FF")]
	public int sortingOrder
	{
		[Token(Token = "0x600058E")]
		[Address(RVA = "0x2EF5E40", Offset = "0x2EF4440", VA = "0x182EF5E40")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600058F")]
		[Address(RVA = "0x2EF65E0", Offset = "0x2EF4BE0", VA = "0x182EF65E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000100")]
	internal int sortingGroupID
	{
		[Token(Token = "0x6000590")]
		[Address(RVA = "0x2EF5C00", Offset = "0x2EF4200", VA = "0x182EF5C00")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000101")]
	internal int sortingGroupOrder
	{
		[Token(Token = "0x6000591")]
		[Address(RVA = "0x2EF5CC0", Offset = "0x2EF42C0", VA = "0x182EF5CC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000102")]
	public Matrix4x4 localToWorldMatrix
	{
		[Token(Token = "0x6000592")]
		[Address(RVA = "0x2EF59A0", Offset = "0x2EF3FA0", VA = "0x182EF59A0")]
		get
		{
			return default(Matrix4x4);
		}
	}

	[Token(Token = "0x17000103")]
	public Material[] materials
	{
		[Token(Token = "0x6000595")]
		[Address(RVA = "0x2EF51D0", Offset = "0x2EF37D0", VA = "0x182EF51D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000104")]
	public Material material
	{
		[Token(Token = "0x6000596")]
		[Address(RVA = "0x2EF4910", Offset = "0x2EF2F10", VA = "0x182EF4910")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000597")]
		[Address(RVA = "0x2EF52F0", Offset = "0x2EF38F0", VA = "0x182EF52F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000105")]
	public Material sharedMaterial
	{
		[Token(Token = "0x6000598")]
		[Address(RVA = "0x2EF4B80", Offset = "0x2EF3180", VA = "0x182EF4B80")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000599")]
		[Address(RVA = "0x2EF52F0", Offset = "0x2EF38F0", VA = "0x182EF52F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000106")]
	public Material[] sharedMaterials
	{
		[Token(Token = "0x600059A")]
		[Address(RVA = "0x2EF4AC0", Offset = "0x2EF30C0", VA = "0x182EF4AC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600059B")]
		[Address(RVA = "0x2EF51D0", Offset = "0x2EF37D0", VA = "0x182EF51D0")]
		set
		{
		}
	}

	[Token(Token = "0x6000574")]
	[Address(RVA = "0x2EF4910", Offset = "0x2EF2F10", VA = "0x182EF4910")]
	[UnityEngine.Bindings.FreeFunction(Name = "RendererScripting::GetMaterial", HasExplicitThis = true)]
	private Material GetMaterial()
	{
		return null;
	}

	[Token(Token = "0x6000575")]
	[Address(RVA = "0x2EF4B80", Offset = "0x2EF3180", VA = "0x182EF4B80")]
	[UnityEngine.Bindings.FreeFunction(Name = "RendererScripting::GetSharedMaterial", HasExplicitThis = true)]
	private Material GetSharedMaterial()
	{
		return null;
	}

	[Token(Token = "0x6000576")]
	[Address(RVA = "0x2EF52F0", Offset = "0x2EF38F0", VA = "0x182EF52F0")]
	[UnityEngine.Bindings.FreeFunction(Name = "RendererScripting::SetMaterial", HasExplicitThis = true)]
	private void SetMaterial(Material m)
	{
	}

	[Token(Token = "0x6000577")]
	[Address(RVA = "0x2EF4780", Offset = "0x2EF2D80", VA = "0x182EF4780")]
	[UnityEngine.Bindings.FreeFunction(Name = "RendererScripting::GetSharedMaterialArray", HasExplicitThis = true)]
	private void CopySharedMaterialArray([Out] Material[] m)
	{
	}

	[Token(Token = "0x6000578")]
	[Address(RVA = "0x2EF5110", Offset = "0x2EF3710", VA = "0x182EF5110")]
	[UnityEngine.Bindings.FreeFunction(Name = "RendererScripting::SetMaterialArray", HasExplicitThis = true)]
	private void SetMaterialArray([UnityEngine.Bindings.NotNull] Material[] m, int length)
	{
	}

	[Token(Token = "0x6000579")]
	[Address(RVA = "0x2EF51D0", Offset = "0x2EF37D0", VA = "0x182EF51D0")]
	private void SetMaterialArray(Material[] m)
	{
	}

	[Token(Token = "0x600057A")]
	[Address(RVA = "0x2EF4F30", Offset = "0x2EF3530", VA = "0x182EF4F30")]
	[UnityEngine.Bindings.FreeFunction(Name = "RendererScripting::SetPropertyBlock", HasExplicitThis = true)]
	internal void Internal_SetPropertyBlock(MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x600057B")]
	[Address(RVA = "0x2EF49B0", Offset = "0x2EF2FB0", VA = "0x182EF49B0")]
	[UnityEngine.Bindings.FreeFunction(Name = "RendererScripting::GetPropertyBlock", HasExplicitThis = true)]
	internal void Internal_GetPropertyBlock([UnityEngine.Bindings.NotNull] MaterialPropertyBlock dest)
	{
	}

	[Token(Token = "0x600057C")]
	[Address(RVA = "0x2EF4E10", Offset = "0x2EF3410", VA = "0x182EF4E10")]
	[UnityEngine.Bindings.FreeFunction(Name = "RendererScripting::HasPropertyBlock", HasExplicitThis = true)]
	public bool HasPropertyBlock()
	{
		return default(bool);
	}

	[Token(Token = "0x600057D")]
	[Address(RVA = "0x2EF4F30", Offset = "0x2EF3530", VA = "0x182EF4F30")]
	public void SetPropertyBlock(MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x600057E")]
	[Address(RVA = "0x2EF49B0", Offset = "0x2EF2FB0", VA = "0x182EF49B0")]
	public void GetPropertyBlock(MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x600058A")]
	[Address(RVA = "0x2EF5020", Offset = "0x2EF3620", VA = "0x182EF5020")]
	[UnityEngine.Bindings.NativeName("SetIsStaticShadowCaster")]
	private void SetIsStaticShadowCaster(bool value)
	{
	}

	[Token(Token = "0x6000593")]
	[Address(RVA = "0x2EF4850", Offset = "0x2EF2E50", VA = "0x182EF4850")]
	private int GetMaterialCount()
	{
		return default(int);
	}

	[Token(Token = "0x6000594")]
	[Address(RVA = "0x2EF4AC0", Offset = "0x2EF30C0", VA = "0x182EF4AC0")]
	[UnityEngine.Bindings.NativeName("GetMaterialArray")]
	private Material[] GetSharedMaterialArray()
	{
		return null;
	}

	[Token(Token = "0x600059C")]
	[Address(RVA = "0x2EF53B0", Offset = "0x2EF39B0", VA = "0x182EF53B0")]
	public void SetSharedMaterials(List<Material> materials)
	{
	}

	[Token(Token = "0x600059D")]
	[Address(RVA = "0x2EF4C20", Offset = "0x2EF3220", VA = "0x182EF4C20")]
	public void GetSharedMaterials(List<Material> m)
	{
	}

	[Token(Token = "0x600059E")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public Renderer()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600059F")]
	[Address(RVA = "0x2EF5530", Offset = "0x2EF3B30", VA = "0x182EF5530")]
	private static extern void get_bounds_Injected(IntPtr _unity_self, out Bounds ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005A0")]
	[Address(RVA = "0x2EF5860", Offset = "0x2EF3E60", VA = "0x182EF5860")]
	private static extern void get_localBounds_Injected(IntPtr _unity_self, out Bounds ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005A1")]
	[Address(RVA = "0x2EF6160", Offset = "0x2EF4760", VA = "0x182EF6160")]
	private static extern void set_localBounds_Injected(IntPtr _unity_self, [In] ref Bounds value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005A2")]
	[Address(RVA = "0x2EF48D0", Offset = "0x2EF2ED0", VA = "0x182EF48D0")]
	private static extern IntPtr GetMaterial_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005A3")]
	[Address(RVA = "0x2EF4B40", Offset = "0x2EF3140", VA = "0x182EF4B40")]
	private static extern IntPtr GetSharedMaterial_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005A4")]
	[Address(RVA = "0x2EF52A0", Offset = "0x2EF38A0", VA = "0x182EF52A0")]
	private static extern void SetMaterial_Injected(IntPtr _unity_self, IntPtr m);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005A5")]
	[Address(RVA = "0x2EF4730", Offset = "0x2EF2D30", VA = "0x182EF4730")]
	private static extern void CopySharedMaterialArray_Injected(IntPtr _unity_self, [Out] Material[] m);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005A6")]
	[Address(RVA = "0x2EF50B0", Offset = "0x2EF36B0", VA = "0x182EF50B0")]
	private static extern void SetMaterialArray_Injected(IntPtr _unity_self, Material[] m, int length);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005A7")]
	[Address(RVA = "0x2EF4EE0", Offset = "0x2EF34E0", VA = "0x182EF4EE0")]
	private static extern void Internal_SetPropertyBlock_Injected(IntPtr _unity_self, IntPtr properties);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005A8")]
	[Address(RVA = "0x2EF4E90", Offset = "0x2EF3490", VA = "0x182EF4E90")]
	private static extern void Internal_GetPropertyBlock_Injected(IntPtr _unity_self, IntPtr dest);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005A9")]
	[Address(RVA = "0x2EF4DD0", Offset = "0x2EF33D0", VA = "0x182EF4DD0")]
	private static extern bool HasPropertyBlock_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005AA")]
	[Address(RVA = "0x2EF5620", Offset = "0x2EF3C20", VA = "0x182EF5620")]
	private static extern bool get_enabled_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005AB")]
	[Address(RVA = "0x2EF5FA0", Offset = "0x2EF45A0", VA = "0x182EF5FA0")]
	private static extern void set_enabled_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005AC")]
	[Address(RVA = "0x2EF57A0", Offset = "0x2EF3DA0", VA = "0x182EF57A0")]
	private static extern bool get_isVisible_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005AD")]
	[Address(RVA = "0x2EF5B00", Offset = "0x2EF4100", VA = "0x182EF5B00")]
	private static extern ShadowCastingMode get_shadowCastingMode_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005AE")]
	[Address(RVA = "0x2EF6320", Offset = "0x2EF4920", VA = "0x182EF6320")]
	private static extern void set_shadowCastingMode_Injected(IntPtr _unity_self, ShadowCastingMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005AF")]
	[Address(RVA = "0x2EF5A40", Offset = "0x2EF4040", VA = "0x182EF5A40")]
	private static extern bool get_receiveShadows_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005B0")]
	[Address(RVA = "0x2EF6240", Offset = "0x2EF4840", VA = "0x182EF6240")]
	private static extern void set_receiveShadows_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005B1")]
	[Address(RVA = "0x2EF56E0", Offset = "0x2EF3CE0", VA = "0x182EF56E0")]
	private static extern bool get_forceRenderingOff_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005B2")]
	[Address(RVA = "0x2EF6080", Offset = "0x2EF4680", VA = "0x182EF6080")]
	private static extern void set_forceRenderingOff_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005B3")]
	[Address(RVA = "0x2EF5EC0", Offset = "0x2EF44C0", VA = "0x182EF5EC0")]
	private static extern void set_allowGPUDrivenRendering_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005B4")]
	[Address(RVA = "0x2EF63F0", Offset = "0x2EF49F0", VA = "0x182EF63F0")]
	private static extern void set_smallMeshCulling_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005B5")]
	[Address(RVA = "0x2EF4FD0", Offset = "0x2EF35D0", VA = "0x182EF4FD0")]
	private static extern void SetIsStaticShadowCaster_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005B6")]
	[Address(RVA = "0x2EF5D40", Offset = "0x2EF4340", VA = "0x182EF5D40")]
	private static extern int get_sortingLayerID_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005B7")]
	[Address(RVA = "0x2EF64D0", Offset = "0x2EF4AD0", VA = "0x182EF64D0")]
	private static extern void set_sortingLayerID_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005B8")]
	[Address(RVA = "0x2EF5E00", Offset = "0x2EF4400", VA = "0x182EF5E00")]
	private static extern int get_sortingOrder_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005B9")]
	[Address(RVA = "0x2EF65A0", Offset = "0x2EF4BA0", VA = "0x182EF65A0")]
	private static extern void set_sortingOrder_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005BA")]
	[Address(RVA = "0x2EF5BC0", Offset = "0x2EF41C0", VA = "0x182EF5BC0")]
	private static extern int get_sortingGroupID_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005BB")]
	[Address(RVA = "0x2EF5C80", Offset = "0x2EF4280", VA = "0x182EF5C80")]
	private static extern int get_sortingGroupOrder_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005BC")]
	[Address(RVA = "0x2EF5950", Offset = "0x2EF3F50", VA = "0x182EF5950")]
	private static extern void get_localToWorldMatrix_Injected(IntPtr _unity_self, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005BD")]
	[Address(RVA = "0x2EF4810", Offset = "0x2EF2E10", VA = "0x182EF4810")]
	private static extern int GetMaterialCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005BE")]
	[Address(RVA = "0x2EF4A80", Offset = "0x2EF3080", VA = "0x182EF4A80")]
	private static extern Material[] GetSharedMaterialArray_Injected(IntPtr _unity_self);
}
