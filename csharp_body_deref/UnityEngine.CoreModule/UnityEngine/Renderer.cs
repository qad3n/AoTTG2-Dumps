// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Renderer
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Rendering;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x20000C0")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/Renderer.h")]
[RequireComponent(typeof(Transform))]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/GraphicsScriptBindings.h")]
public class Renderer : Component
{
	[Token(Token = "0x170000C7")]
	public Bounds bounds
	{
		[Token(Token = "0x6000404")]
		[Address(RVA = "0x4DC79F0", Offset = "0x4DC79F0", VA = "0x4DC79F0")]
		[UnityEngine.Bindings.FreeFunction(Name = "RendererScripting::GetWorldBounds", HasExplicitThis = true)]
		get
		{
			return default(Bounds);
		}
	}

	[Token(Token = "0x170000C8")]
	public Bounds localBounds
	{
		[Token(Token = "0x6000405")]
		[Address(RVA = "0x4DC7B00", Offset = "0x4DC7B00", VA = "0x4DC7B00")]
		[UnityEngine.Bindings.FreeFunction(Name = "RendererScripting::GetLocalBounds", HasExplicitThis = true)]
		get
		{
			return default(Bounds);
		}
	}

	[Token(Token = "0x170000C9")]
	public bool enabled
	{
		[Token(Token = "0x600040B")]
		[Address(RVA = "0x4DC80B0", Offset = "0x4DC80B0", VA = "0x4DC80B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600040C")]
		[Address(RVA = "0x4DC8180", Offset = "0x4DC8180", VA = "0x4DC8180")]
		set
		{
		}
	}

	[Token(Token = "0x170000CA")]
	public bool isVisible
	{
		[Token(Token = "0x600040D")]
		[Address(RVA = "0x4DC8260", Offset = "0x4DC8260", VA = "0x4DC8260")]
		[UnityEngine.Bindings.NativeName("IsVisibleInScene")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000CB")]
	public ShadowCastingMode shadowCastingMode
	{
		[Token(Token = "0x600040E")]
		[Address(RVA = "0x4DC8330", Offset = "0x4DC8330", VA = "0x4DC8330")]
		get
		{
			return default(ShadowCastingMode);
		}
		[Token(Token = "0x600040F")]
		[Address(RVA = "0x4DC8400", Offset = "0x4DC8400", VA = "0x4DC8400")]
		set
		{
		}
	}

	[Token(Token = "0x170000CC")]
	public bool receiveShadows
	{
		[Token(Token = "0x6000410")]
		[Address(RVA = "0x4DC84E0", Offset = "0x4DC84E0", VA = "0x4DC84E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000411")]
		[Address(RVA = "0x4DC85B0", Offset = "0x4DC85B0", VA = "0x4DC85B0")]
		set
		{
		}
	}

	[Token(Token = "0x170000CD")]
	public bool staticShadowCaster
	{
		[Token(Token = "0x6000413")]
		[Address(RVA = "0x4DC8770", Offset = "0x4DC8770", VA = "0x4DC8770")]
		set
		{
		}
	}

	[Token(Token = "0x170000CE")]
	public int sortingLayerID
	{
		[Token(Token = "0x6000414")]
		[Address(RVA = "0x4DC8810", Offset = "0x4DC8810", VA = "0x4DC8810")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000415")]
		[Address(RVA = "0x4DC88E0", Offset = "0x4DC88E0", VA = "0x4DC88E0")]
		set
		{
		}
	}

	[Token(Token = "0x170000CF")]
	public int sortingOrder
	{
		[Token(Token = "0x6000416")]
		[Address(RVA = "0x4DC89C0", Offset = "0x4DC89C0", VA = "0x4DC89C0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000417")]
		[Address(RVA = "0x4DC8A90", Offset = "0x4DC8A90", VA = "0x4DC8A90")]
		set
		{
		}
	}

	[Token(Token = "0x170000D0")]
	internal int sortingGroupID
	{
		[Token(Token = "0x6000418")]
		[Address(RVA = "0x4DC8B70", Offset = "0x4DC8B70", VA = "0x4DC8B70")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000D1")]
	internal int sortingGroupOrder
	{
		[Token(Token = "0x6000419")]
		[Address(RVA = "0x4DC8C40", Offset = "0x4DC8C40", VA = "0x4DC8C40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000D2")]
	public Material[] materials
	{
		[Token(Token = "0x600041B")]
		[Address(RVA = "0x4DC8DE0", Offset = "0x4DC8DE0", VA = "0x4DC8DE0")]
		set
		{
		}
	}

	[Token(Token = "0x170000D3")]
	public Material material
	{
		[Token(Token = "0x600041C")]
		[Address(RVA = "0x4DC8DF0", Offset = "0x4DC8DF0", VA = "0x4DC8DF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600041D")]
		[Address(RVA = "0x4DC8E90", Offset = "0x4DC8E90", VA = "0x4DC8E90")]
		set
		{
		}
	}

	[Token(Token = "0x170000D4")]
	public Material sharedMaterial
	{
		[Token(Token = "0x600041E")]
		[Address(RVA = "0x4DC8EA0", Offset = "0x4DC8EA0", VA = "0x4DC8EA0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600041F")]
		[Address(RVA = "0x4DC8F40", Offset = "0x4DC8F40", VA = "0x4DC8F40")]
		set
		{
		}
	}

	[Token(Token = "0x170000D5")]
	public Material[] sharedMaterials
	{
		[Token(Token = "0x6000420")]
		[Address(RVA = "0x4DC8F50", Offset = "0x4DC8F50", VA = "0x4DC8F50")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000421")]
		[Address(RVA = "0x4DC8FF0", Offset = "0x4DC8FF0", VA = "0x4DC8FF0")]
		set
		{
		}
	}

	[Token(Token = "0x6000406")]
	[Address(RVA = "0x4DC7C10", Offset = "0x4DC7C10", VA = "0x4DC7C10")]
	[UnityEngine.Bindings.FreeFunction(Name = "RendererScripting::GetMaterial", HasExplicitThis = true)]
	private Material GetMaterial()
	{
		return null;
	}

	[Token(Token = "0x6000407")]
	[Address(RVA = "0x4DC7CE0", Offset = "0x4DC7CE0", VA = "0x4DC7CE0")]
	[UnityEngine.Bindings.FreeFunction(Name = "RendererScripting::GetSharedMaterial", HasExplicitThis = true)]
	private Material GetSharedMaterial()
	{
		return null;
	}

	[Token(Token = "0x6000408")]
	[Address(RVA = "0x4DC7DB0", Offset = "0x4DC7DB0", VA = "0x4DC7DB0")]
	[UnityEngine.Bindings.FreeFunction(Name = "RendererScripting::SetMaterial", HasExplicitThis = true)]
	private void SetMaterial(Material m)
	{
	}

	[Token(Token = "0x6000409")]
	[Address(RVA = "0x4DC7EF0", Offset = "0x4DC7EF0", VA = "0x4DC7EF0")]
	[UnityEngine.Bindings.FreeFunction(Name = "RendererScripting::SetMaterialArray", HasExplicitThis = true)]
	private void SetMaterialArray([UnityEngine.Bindings.NotNull("ArgumentNullException")] Material[] m, int length)
	{
	}

	[Token(Token = "0x600040A")]
	[Address(RVA = "0x4DC7FE0", Offset = "0x4DC7FE0", VA = "0x4DC7FE0")]
	private void SetMaterialArray(Material[] m)
	{
	}

	[Token(Token = "0x6000412")]
	[Address(RVA = "0x4DC8690", Offset = "0x4DC8690", VA = "0x4DC8690")]
	[UnityEngine.Bindings.NativeName("SetIsStaticShadowCaster")]
	private void SetIsStaticShadowCaster(bool value)
	{
	}

	[Token(Token = "0x600041A")]
	[Address(RVA = "0x4DC8D10", Offset = "0x4DC8D10", VA = "0x4DC8D10")]
	[UnityEngine.Bindings.NativeName("GetMaterialArray")]
	private Material[] GetSharedMaterialArray()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000422")]
	[Address(RVA = "0x4DC7AC0", Offset = "0x4DC7AC0", VA = "0x4DC7AC0")]
	private static extern void get_bounds_Injected(IntPtr _unity_self, out Bounds ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000423")]
	[Address(RVA = "0x4DC7BD0", Offset = "0x4DC7BD0", VA = "0x4DC7BD0")]
	private static extern void get_localBounds_Injected(IntPtr _unity_self, out Bounds ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000424")]
	[Address(RVA = "0x4DC7CB0", Offset = "0x4DC7CB0", VA = "0x4DC7CB0")]
	private static extern Material GetMaterial_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000425")]
	[Address(RVA = "0x4DC7D80", Offset = "0x4DC7D80", VA = "0x4DC7D80")]
	private static extern Material GetSharedMaterial_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000426")]
	[Address(RVA = "0x4DC7EB0", Offset = "0x4DC7EB0", VA = "0x4DC7EB0")]
	private static extern void SetMaterial_Injected(IntPtr _unity_self, IntPtr m);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000427")]
	[Address(RVA = "0x4DC7FA0", Offset = "0x4DC7FA0", VA = "0x4DC7FA0")]
	private static extern void SetMaterialArray_Injected(IntPtr _unity_self, Material[] m, int length);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000428")]
	[Address(RVA = "0x4DC8150", Offset = "0x4DC8150", VA = "0x4DC8150")]
	private static extern bool get_enabled_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000429")]
	[Address(RVA = "0x4DC8220", Offset = "0x4DC8220", VA = "0x4DC8220")]
	private static extern void set_enabled_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600042A")]
	[Address(RVA = "0x4DC8300", Offset = "0x4DC8300", VA = "0x4DC8300")]
	private static extern bool get_isVisible_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600042B")]
	[Address(RVA = "0x4DC83D0", Offset = "0x4DC83D0", VA = "0x4DC83D0")]
	private static extern ShadowCastingMode get_shadowCastingMode_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600042C")]
	[Address(RVA = "0x4DC84A0", Offset = "0x4DC84A0", VA = "0x4DC84A0")]
	private static extern void set_shadowCastingMode_Injected(IntPtr _unity_self, ShadowCastingMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600042D")]
	[Address(RVA = "0x4DC8580", Offset = "0x4DC8580", VA = "0x4DC8580")]
	private static extern bool get_receiveShadows_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600042E")]
	[Address(RVA = "0x4DC8650", Offset = "0x4DC8650", VA = "0x4DC8650")]
	private static extern void set_receiveShadows_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600042F")]
	[Address(RVA = "0x4DC8730", Offset = "0x4DC8730", VA = "0x4DC8730")]
	private static extern void SetIsStaticShadowCaster_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000430")]
	[Address(RVA = "0x4DC88B0", Offset = "0x4DC88B0", VA = "0x4DC88B0")]
	private static extern int get_sortingLayerID_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000431")]
	[Address(RVA = "0x4DC8980", Offset = "0x4DC8980", VA = "0x4DC8980")]
	private static extern void set_sortingLayerID_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000432")]
	[Address(RVA = "0x4DC8A60", Offset = "0x4DC8A60", VA = "0x4DC8A60")]
	private static extern int get_sortingOrder_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000433")]
	[Address(RVA = "0x4DC8B30", Offset = "0x4DC8B30", VA = "0x4DC8B30")]
	private static extern void set_sortingOrder_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000434")]
	[Address(RVA = "0x4DC8C10", Offset = "0x4DC8C10", VA = "0x4DC8C10")]
	private static extern int get_sortingGroupID_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000435")]
	[Address(RVA = "0x4DC8CE0", Offset = "0x4DC8CE0", VA = "0x4DC8CE0")]
	private static extern int get_sortingGroupOrder_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000436")]
	[Address(RVA = "0x4DC8DB0", Offset = "0x4DC8DB0", VA = "0x4DC8DB0")]
	private static extern Material[] GetSharedMaterialArray_Injected(IntPtr _unity_self);
}
