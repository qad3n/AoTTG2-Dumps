// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Renderer
// Update status: unchanged since the previous dump
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

[Token(Token = "0x20000E2")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/Renderer.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/GraphicsScriptBindings.h")]
[UnityEngine.Scripting.UsedByNativeCode]
[RequireComponent(typeof(Transform))]
public class Renderer : Component
{
	[Token(Token = "0x170000FA")]
	public Bounds bounds
	{
		[Token(Token = "0x6000580")]
		[Address(RVA = "0x68D8CD0", Offset = "0x68D7CD0", VA = "0x68D8CD0")]
		[UnityEngine.Bindings.FreeFunction(Name = "RendererScripting::GetWorldBounds", HasExplicitThis = true)]
		get
		{
			return default(Bounds);
		}
	}

	[Token(Token = "0x170000FB")]
	public Bounds localBounds
	{
		[Token(Token = "0x6000581")]
		[Address(RVA = "0x68D8DC0", Offset = "0x68D7DC0", VA = "0x68D8DC0")]
		[UnityEngine.Bindings.FreeFunction(Name = "RendererScripting::GetLocalBounds", HasExplicitThis = true)]
		get
		{
			return default(Bounds);
		}
		[Token(Token = "0x6000582")]
		[Address(RVA = "0x68D8EB0", Offset = "0x68D7EB0", VA = "0x68D8EB0")]
		[UnityEngine.Bindings.NativeName("SetLocalAABB")]
		set
		{
		}
	}

	[Token(Token = "0x170000FC")]
	public bool enabled
	{
		[Token(Token = "0x600058E")]
		[Address(RVA = "0x68D9750", Offset = "0x68D8750", VA = "0x68D9750")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600058F")]
		[Address(RVA = "0x68D9800", Offset = "0x68D8800", VA = "0x68D9800")]
		set
		{
		}
	}

	[Token(Token = "0x170000FD")]
	public bool isVisible
	{
		[Token(Token = "0x6000590")]
		[Address(RVA = "0x68D98C0", Offset = "0x68D88C0", VA = "0x68D98C0")]
		[UnityEngine.Bindings.NativeName("IsVisibleInScene")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FE")]
	public ShadowCastingMode shadowCastingMode
	{
		[Token(Token = "0x6000591")]
		[Address(RVA = "0x68D9970", Offset = "0x68D8970", VA = "0x68D9970")]
		get
		{
			return default(ShadowCastingMode);
		}
		[Token(Token = "0x6000592")]
		[Address(RVA = "0x68D9A20", Offset = "0x68D8A20", VA = "0x68D9A20")]
		set
		{
		}
	}

	[Token(Token = "0x170000FF")]
	public bool receiveShadows
	{
		[Token(Token = "0x6000593")]
		[Address(RVA = "0x68D9AE0", Offset = "0x68D8AE0", VA = "0x68D9AE0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000594")]
		[Address(RVA = "0x68D9B90", Offset = "0x68D8B90", VA = "0x68D9B90")]
		set
		{
		}
	}

	[Token(Token = "0x17000100")]
	public bool forceRenderingOff
	{
		[Token(Token = "0x6000595")]
		[Address(RVA = "0x68D9C50", Offset = "0x68D8C50", VA = "0x68D9C50")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000596")]
		[Address(RVA = "0x68D9D00", Offset = "0x68D8D00", VA = "0x68D9D00")]
		set
		{
		}
	}

	[Token(Token = "0x17000101")]
	internal bool allowGPUDrivenRendering
	{
		[Token(Token = "0x6000597")]
		[Address(RVA = "0x68D9DC0", Offset = "0x68D8DC0", VA = "0x68D9DC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000102")]
	internal bool smallMeshCulling
	{
		[Token(Token = "0x6000598")]
		[Address(RVA = "0x68D9E80", Offset = "0x68D8E80", VA = "0x68D9E80")]
		set
		{
		}
	}

	[Token(Token = "0x17000103")]
	public bool staticShadowCaster
	{
		[Token(Token = "0x600059A")]
		[Address(RVA = "0x68DA000", Offset = "0x68D9000", VA = "0x68DA000")]
		set
		{
		}
	}

	[Token(Token = "0x17000104")]
	public int sortingLayerID
	{
		[Token(Token = "0x600059B")]
		[Address(RVA = "0x68DA080", Offset = "0x68D9080", VA = "0x68DA080")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600059C")]
		[Address(RVA = "0x68DA130", Offset = "0x68D9130", VA = "0x68DA130")]
		set
		{
		}
	}

	[Token(Token = "0x17000105")]
	public int sortingOrder
	{
		[Token(Token = "0x600059D")]
		[Address(RVA = "0x68DA1F0", Offset = "0x68D91F0", VA = "0x68DA1F0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600059E")]
		[Address(RVA = "0x68DA2A0", Offset = "0x68D92A0", VA = "0x68DA2A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000106")]
	internal int sortingGroupID
	{
		[Token(Token = "0x600059F")]
		[Address(RVA = "0x68DA360", Offset = "0x68D9360", VA = "0x68DA360")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000107")]
	internal int sortingGroupOrder
	{
		[Token(Token = "0x60005A0")]
		[Address(RVA = "0x68DA410", Offset = "0x68D9410", VA = "0x68DA410")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000108")]
	public Matrix4x4 localToWorldMatrix
	{
		[Token(Token = "0x60005A1")]
		[Address(RVA = "0x68DA4C0", Offset = "0x68D94C0", VA = "0x68DA4C0")]
		get
		{
			return default(Matrix4x4);
		}
	}

	[Token(Token = "0x17000109")]
	public Material[] materials
	{
		[Token(Token = "0x60005A4")]
		[Address(RVA = "0x68DA730", Offset = "0x68D9730", VA = "0x68DA730")]
		set
		{
		}
	}

	[Token(Token = "0x1700010A")]
	public Material material
	{
		[Token(Token = "0x60005A5")]
		[Address(RVA = "0x68DA810", Offset = "0x68D9810", VA = "0x68DA810")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005A6")]
		[Address(RVA = "0x68DA820", Offset = "0x68D9820", VA = "0x68DA820")]
		set
		{
		}
	}

	[Token(Token = "0x1700010B")]
	public Material sharedMaterial
	{
		[Token(Token = "0x60005A7")]
		[Address(RVA = "0x68DA830", Offset = "0x68D9830", VA = "0x68DA830")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005A8")]
		[Address(RVA = "0x68DA840", Offset = "0x68D9840", VA = "0x68DA840")]
		set
		{
		}
	}

	[Token(Token = "0x1700010C")]
	public Material[] sharedMaterials
	{
		[Token(Token = "0x60005A9")]
		[Address(RVA = "0x68DA850", Offset = "0x68D9850", VA = "0x68DA850")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005AA")]
		[Address(RVA = "0x68DA8D0", Offset = "0x68D98D0", VA = "0x68DA8D0")]
		set
		{
		}
	}

	[Token(Token = "0x6000583")]
	[Address(RVA = "0x68D8F80", Offset = "0x68D7F80", VA = "0x68D8F80")]
	[UnityEngine.Bindings.FreeFunction(Name = "RendererScripting::GetMaterial", HasExplicitThis = true)]
	private Material GetMaterial()
	{
		return null;
	}

	[Token(Token = "0x6000584")]
	[Address(RVA = "0x68D9050", Offset = "0x68D8050", VA = "0x68D9050")]
	[UnityEngine.Bindings.FreeFunction(Name = "RendererScripting::GetSharedMaterial", HasExplicitThis = true)]
	private Material GetSharedMaterial()
	{
		return null;
	}

	[Token(Token = "0x6000585")]
	[Address(RVA = "0x68D9120", Offset = "0x68D8120", VA = "0x68D9120")]
	[UnityEngine.Bindings.FreeFunction(Name = "RendererScripting::SetMaterial", HasExplicitThis = true)]
	private void SetMaterial(Material m)
	{
	}

	[Token(Token = "0x6000586")]
	[Address(RVA = "0x68D9230", Offset = "0x68D8230", VA = "0x68D9230")]
	[UnityEngine.Bindings.FreeFunction(Name = "RendererScripting::GetSharedMaterialArray", HasExplicitThis = true)]
	private void CopySharedMaterialArray([Out] Material[] m)
	{
	}

	[Token(Token = "0x6000587")]
	[Address(RVA = "0x68D92F0", Offset = "0x68D82F0", VA = "0x68D92F0")]
	[UnityEngine.Bindings.FreeFunction(Name = "RendererScripting::SetMaterialArray", HasExplicitThis = true)]
	private void SetMaterialArray([UnityEngine.Bindings.NotNull] Material[] m, int length)
	{
	}

	[Token(Token = "0x6000588")]
	[Address(RVA = "0x68D93F0", Offset = "0x68D83F0", VA = "0x68D93F0")]
	private void SetMaterialArray(Material[] m)
	{
	}

	[Token(Token = "0x6000589")]
	[Address(RVA = "0x68D9410", Offset = "0x68D8410", VA = "0x68D9410")]
	[UnityEngine.Bindings.FreeFunction(Name = "RendererScripting::SetPropertyBlock", HasExplicitThis = true)]
	internal void Internal_SetPropertyBlock(MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x600058A")]
	[Address(RVA = "0x68D94E0", Offset = "0x68D84E0", VA = "0x68D94E0")]
	[UnityEngine.Bindings.FreeFunction(Name = "RendererScripting::GetPropertyBlock", HasExplicitThis = true)]
	internal void Internal_GetPropertyBlock([UnityEngine.Bindings.NotNull] MaterialPropertyBlock dest)
	{
	}

	[Token(Token = "0x600058B")]
	[Address(RVA = "0x68D9600", Offset = "0x68D8600", VA = "0x68D9600")]
	[UnityEngine.Bindings.FreeFunction(Name = "RendererScripting::HasPropertyBlock", HasExplicitThis = true)]
	public bool HasPropertyBlock()
	{
		return default(bool);
	}

	[Token(Token = "0x600058C")]
	[Address(RVA = "0x68D96B0", Offset = "0x68D86B0", VA = "0x68D96B0")]
	public void SetPropertyBlock(MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x600058D")]
	[Address(RVA = "0x68D9740", Offset = "0x68D8740", VA = "0x68D9740")]
	public void GetPropertyBlock(MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000599")]
	[Address(RVA = "0x68D9F40", Offset = "0x68D8F40", VA = "0x68D9F40")]
	[UnityEngine.Bindings.NativeName("SetIsStaticShadowCaster")]
	private void SetIsStaticShadowCaster(bool value)
	{
	}

	[Token(Token = "0x60005A2")]
	[Address(RVA = "0x68DA5D0", Offset = "0x68D95D0", VA = "0x68DA5D0")]
	private int GetMaterialCount()
	{
		return default(int);
	}

	[Token(Token = "0x60005A3")]
	[Address(RVA = "0x68DA680", Offset = "0x68D9680", VA = "0x68DA680")]
	[UnityEngine.Bindings.NativeName("GetMaterialArray")]
	private Material[] GetSharedMaterialArray()
	{
		return null;
	}

	[Token(Token = "0x60005AB")]
	[Address(RVA = "0x68DA9B0", Offset = "0x68D99B0", VA = "0x68DA9B0")]
	public void SetSharedMaterials(List<Material> materials)
	{
	}

	[Token(Token = "0x60005AC")]
	[Address(RVA = "0x68DAA90", Offset = "0x68D9A90", VA = "0x68DAA90")]
	public void GetSharedMaterials(List<Material> m)
	{
	}

	[Token(Token = "0x60005AD")]
	[Address(RVA = "0x68D7170", Offset = "0x68D6170", VA = "0x68D7170")]
	public Renderer()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005AE")]
	[Address(RVA = "0x68D8D80", Offset = "0x68D7D80", VA = "0x68D8D80")]
	private static extern void get_bounds_Injected(IntPtr _unity_self, out Bounds ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005AF")]
	[Address(RVA = "0x68D8E70", Offset = "0x68D7E70", VA = "0x68D8E70")]
	private static extern void get_localBounds_Injected(IntPtr _unity_self, out Bounds ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005B0")]
	[Address(RVA = "0x68D8F40", Offset = "0x68D7F40", VA = "0x68D8F40")]
	private static extern void set_localBounds_Injected(IntPtr _unity_self, [In] ref Bounds value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005B1")]
	[Address(RVA = "0x68D9020", Offset = "0x68D8020", VA = "0x68D9020")]
	private static extern IntPtr GetMaterial_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005B2")]
	[Address(RVA = "0x68D90F0", Offset = "0x68D80F0", VA = "0x68D90F0")]
	private static extern IntPtr GetSharedMaterial_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005B3")]
	[Address(RVA = "0x68D91F0", Offset = "0x68D81F0", VA = "0x68D91F0")]
	private static extern void SetMaterial_Injected(IntPtr _unity_self, IntPtr m);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005B4")]
	[Address(RVA = "0x68D92B0", Offset = "0x68D82B0", VA = "0x68D92B0")]
	private static extern void CopySharedMaterialArray_Injected(IntPtr _unity_self, [Out] Material[] m);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005B5")]
	[Address(RVA = "0x68D93B0", Offset = "0x68D83B0", VA = "0x68D93B0")]
	private static extern void SetMaterialArray_Injected(IntPtr _unity_self, Material[] m, int length);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005B6")]
	[Address(RVA = "0x68D94A0", Offset = "0x68D84A0", VA = "0x68D94A0")]
	private static extern void Internal_SetPropertyBlock_Injected(IntPtr _unity_self, IntPtr properties);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005B7")]
	[Address(RVA = "0x68D95C0", Offset = "0x68D85C0", VA = "0x68D95C0")]
	private static extern void Internal_GetPropertyBlock_Injected(IntPtr _unity_self, IntPtr dest);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005B8")]
	[Address(RVA = "0x68D9680", Offset = "0x68D8680", VA = "0x68D9680")]
	private static extern bool HasPropertyBlock_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005B9")]
	[Address(RVA = "0x68D97D0", Offset = "0x68D87D0", VA = "0x68D97D0")]
	private static extern bool get_enabled_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005BA")]
	[Address(RVA = "0x68D9880", Offset = "0x68D8880", VA = "0x68D9880")]
	private static extern void set_enabled_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005BB")]
	[Address(RVA = "0x68D9940", Offset = "0x68D8940", VA = "0x68D9940")]
	private static extern bool get_isVisible_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005BC")]
	[Address(RVA = "0x68D99F0", Offset = "0x68D89F0", VA = "0x68D99F0")]
	private static extern ShadowCastingMode get_shadowCastingMode_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005BD")]
	[Address(RVA = "0x68D9AA0", Offset = "0x68D8AA0", VA = "0x68D9AA0")]
	private static extern void set_shadowCastingMode_Injected(IntPtr _unity_self, ShadowCastingMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005BE")]
	[Address(RVA = "0x68D9B60", Offset = "0x68D8B60", VA = "0x68D9B60")]
	private static extern bool get_receiveShadows_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005BF")]
	[Address(RVA = "0x68D9C10", Offset = "0x68D8C10", VA = "0x68D9C10")]
	private static extern void set_receiveShadows_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005C0")]
	[Address(RVA = "0x68D9CD0", Offset = "0x68D8CD0", VA = "0x68D9CD0")]
	private static extern bool get_forceRenderingOff_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005C1")]
	[Address(RVA = "0x68D9D80", Offset = "0x68D8D80", VA = "0x68D9D80")]
	private static extern void set_forceRenderingOff_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005C2")]
	[Address(RVA = "0x68D9E40", Offset = "0x68D8E40", VA = "0x68D9E40")]
	private static extern void set_allowGPUDrivenRendering_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005C3")]
	[Address(RVA = "0x68D9F00", Offset = "0x68D8F00", VA = "0x68D9F00")]
	private static extern void set_smallMeshCulling_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005C4")]
	[Address(RVA = "0x68D9FC0", Offset = "0x68D8FC0", VA = "0x68D9FC0")]
	private static extern void SetIsStaticShadowCaster_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005C5")]
	[Address(RVA = "0x68DA100", Offset = "0x68D9100", VA = "0x68DA100")]
	private static extern int get_sortingLayerID_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005C6")]
	[Address(RVA = "0x68DA1B0", Offset = "0x68D91B0", VA = "0x68DA1B0")]
	private static extern void set_sortingLayerID_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005C7")]
	[Address(RVA = "0x68DA270", Offset = "0x68D9270", VA = "0x68DA270")]
	private static extern int get_sortingOrder_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005C8")]
	[Address(RVA = "0x68DA320", Offset = "0x68D9320", VA = "0x68DA320")]
	private static extern void set_sortingOrder_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005C9")]
	[Address(RVA = "0x68DA3E0", Offset = "0x68D93E0", VA = "0x68DA3E0")]
	private static extern int get_sortingGroupID_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005CA")]
	[Address(RVA = "0x68DA490", Offset = "0x68D9490", VA = "0x68DA490")]
	private static extern int get_sortingGroupOrder_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005CB")]
	[Address(RVA = "0x68DA590", Offset = "0x68D9590", VA = "0x68DA590")]
	private static extern void get_localToWorldMatrix_Injected(IntPtr _unity_self, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005CC")]
	[Address(RVA = "0x68DA650", Offset = "0x68D9650", VA = "0x68DA650")]
	private static extern int GetMaterialCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005CD")]
	[Address(RVA = "0x68DA700", Offset = "0x68D9700", VA = "0x68DA700")]
	private static extern Material[] GetSharedMaterialArray_Injected(IntPtr _unity_self);
}
