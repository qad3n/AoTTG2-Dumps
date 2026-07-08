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
		[Address(RVA = "0x4AA01D0", Offset = "0x4AA01D0", VA = "0x4AA01D0")]
		[UnityEngine.Bindings.FreeFunction(Name = "RendererScripting::GetWorldBounds", HasExplicitThis = true)]
		get
		{
			return default(Bounds);
		}
	}

	[Token(Token = "0x170000C8")]
	public bool enabled
	{
		[Token(Token = "0x600040A")]
		[Address(RVA = "0x4AA0780", Offset = "0x4AA0780", VA = "0x4AA0780")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600040B")]
		[Address(RVA = "0x4AA0850", Offset = "0x4AA0850", VA = "0x4AA0850")]
		set
		{
		}
	}

	[Token(Token = "0x170000C9")]
	public bool isVisible
	{
		[Token(Token = "0x600040C")]
		[Address(RVA = "0x4AA0930", Offset = "0x4AA0930", VA = "0x4AA0930")]
		[UnityEngine.Bindings.NativeName("IsVisibleInScene")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000CA")]
	public ShadowCastingMode shadowCastingMode
	{
		[Token(Token = "0x600040D")]
		[Address(RVA = "0x4AA0A00", Offset = "0x4AA0A00", VA = "0x4AA0A00")]
		get
		{
			return default(ShadowCastingMode);
		}
		[Token(Token = "0x600040E")]
		[Address(RVA = "0x4AA0AD0", Offset = "0x4AA0AD0", VA = "0x4AA0AD0")]
		set
		{
		}
	}

	[Token(Token = "0x170000CB")]
	public bool receiveShadows
	{
		[Token(Token = "0x600040F")]
		[Address(RVA = "0x4AA0BB0", Offset = "0x4AA0BB0", VA = "0x4AA0BB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000410")]
		[Address(RVA = "0x4AA0C80", Offset = "0x4AA0C80", VA = "0x4AA0C80")]
		set
		{
		}
	}

	[Token(Token = "0x170000CC")]
	public bool staticShadowCaster
	{
		[Token(Token = "0x6000412")]
		[Address(RVA = "0x4AA0E40", Offset = "0x4AA0E40", VA = "0x4AA0E40")]
		set
		{
		}
	}

	[Token(Token = "0x170000CD")]
	public int sortingLayerID
	{
		[Token(Token = "0x6000413")]
		[Address(RVA = "0x4AA0EE0", Offset = "0x4AA0EE0", VA = "0x4AA0EE0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000414")]
		[Address(RVA = "0x4AA0FB0", Offset = "0x4AA0FB0", VA = "0x4AA0FB0")]
		set
		{
		}
	}

	[Token(Token = "0x170000CE")]
	public int sortingOrder
	{
		[Token(Token = "0x6000415")]
		[Address(RVA = "0x4AA1090", Offset = "0x4AA1090", VA = "0x4AA1090")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000416")]
		[Address(RVA = "0x4AA1160", Offset = "0x4AA1160", VA = "0x4AA1160")]
		set
		{
		}
	}

	[Token(Token = "0x170000CF")]
	internal int sortingGroupID
	{
		[Token(Token = "0x6000417")]
		[Address(RVA = "0x4AA1240", Offset = "0x4AA1240", VA = "0x4AA1240")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000D0")]
	internal int sortingGroupOrder
	{
		[Token(Token = "0x6000418")]
		[Address(RVA = "0x4AA1310", Offset = "0x4AA1310", VA = "0x4AA1310")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000D1")]
	public Material[] materials
	{
		[Token(Token = "0x600041A")]
		[Address(RVA = "0x4AA14B0", Offset = "0x4AA14B0", VA = "0x4AA14B0")]
		set
		{
		}
	}

	[Token(Token = "0x170000D2")]
	public Material material
	{
		[Token(Token = "0x600041B")]
		[Address(RVA = "0x4AA14C0", Offset = "0x4AA14C0", VA = "0x4AA14C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600041C")]
		[Address(RVA = "0x4AA1560", Offset = "0x4AA1560", VA = "0x4AA1560")]
		set
		{
		}
	}

	[Token(Token = "0x170000D3")]
	public Material sharedMaterial
	{
		[Token(Token = "0x600041D")]
		[Address(RVA = "0x4AA1570", Offset = "0x4AA1570", VA = "0x4AA1570")]
		get
		{
			return null;
		}
		[Token(Token = "0x600041E")]
		[Address(RVA = "0x4AA1610", Offset = "0x4AA1610", VA = "0x4AA1610")]
		set
		{
		}
	}

	[Token(Token = "0x170000D4")]
	public Material[] sharedMaterials
	{
		[Token(Token = "0x600041F")]
		[Address(RVA = "0x4AA1620", Offset = "0x4AA1620", VA = "0x4AA1620")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000420")]
		[Address(RVA = "0x4AA16C0", Offset = "0x4AA16C0", VA = "0x4AA16C0")]
		set
		{
		}
	}

	[Token(Token = "0x6000405")]
	[Address(RVA = "0x4AA02E0", Offset = "0x4AA02E0", VA = "0x4AA02E0")]
	[UnityEngine.Bindings.FreeFunction(Name = "RendererScripting::GetMaterial", HasExplicitThis = true)]
	private Material GetMaterial()
	{
		return null;
	}

	[Token(Token = "0x6000406")]
	[Address(RVA = "0x4AA03B0", Offset = "0x4AA03B0", VA = "0x4AA03B0")]
	[UnityEngine.Bindings.FreeFunction(Name = "RendererScripting::GetSharedMaterial", HasExplicitThis = true)]
	private Material GetSharedMaterial()
	{
		return null;
	}

	[Token(Token = "0x6000407")]
	[Address(RVA = "0x4AA0480", Offset = "0x4AA0480", VA = "0x4AA0480")]
	[UnityEngine.Bindings.FreeFunction(Name = "RendererScripting::SetMaterial", HasExplicitThis = true)]
	private void SetMaterial(Material m)
	{
	}

	[Token(Token = "0x6000408")]
	[Address(RVA = "0x4AA05C0", Offset = "0x4AA05C0", VA = "0x4AA05C0")]
	[UnityEngine.Bindings.FreeFunction(Name = "RendererScripting::SetMaterialArray", HasExplicitThis = true)]
	private void SetMaterialArray([UnityEngine.Bindings.NotNull("ArgumentNullException")] Material[] m, int length)
	{
	}

	[Token(Token = "0x6000409")]
	[Address(RVA = "0x4AA06B0", Offset = "0x4AA06B0", VA = "0x4AA06B0")]
	private void SetMaterialArray(Material[] m)
	{
	}

	[Token(Token = "0x6000411")]
	[Address(RVA = "0x4AA0D60", Offset = "0x4AA0D60", VA = "0x4AA0D60")]
	[UnityEngine.Bindings.NativeName("SetIsStaticShadowCaster")]
	private void SetIsStaticShadowCaster(bool value)
	{
	}

	[Token(Token = "0x6000419")]
	[Address(RVA = "0x4AA13E0", Offset = "0x4AA13E0", VA = "0x4AA13E0")]
	[UnityEngine.Bindings.NativeName("GetMaterialArray")]
	private Material[] GetSharedMaterialArray()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000421")]
	[Address(RVA = "0x4AA02A0", Offset = "0x4AA02A0", VA = "0x4AA02A0")]
	private static extern void get_bounds_Injected(IntPtr _unity_self, out Bounds ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000422")]
	[Address(RVA = "0x4AA0380", Offset = "0x4AA0380", VA = "0x4AA0380")]
	private static extern Material GetMaterial_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000423")]
	[Address(RVA = "0x4AA0450", Offset = "0x4AA0450", VA = "0x4AA0450")]
	private static extern Material GetSharedMaterial_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000424")]
	[Address(RVA = "0x4AA0580", Offset = "0x4AA0580", VA = "0x4AA0580")]
	private static extern void SetMaterial_Injected(IntPtr _unity_self, IntPtr m);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000425")]
	[Address(RVA = "0x4AA0670", Offset = "0x4AA0670", VA = "0x4AA0670")]
	private static extern void SetMaterialArray_Injected(IntPtr _unity_self, Material[] m, int length);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000426")]
	[Address(RVA = "0x4AA0820", Offset = "0x4AA0820", VA = "0x4AA0820")]
	private static extern bool get_enabled_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000427")]
	[Address(RVA = "0x4AA08F0", Offset = "0x4AA08F0", VA = "0x4AA08F0")]
	private static extern void set_enabled_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000428")]
	[Address(RVA = "0x4AA09D0", Offset = "0x4AA09D0", VA = "0x4AA09D0")]
	private static extern bool get_isVisible_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000429")]
	[Address(RVA = "0x4AA0AA0", Offset = "0x4AA0AA0", VA = "0x4AA0AA0")]
	private static extern ShadowCastingMode get_shadowCastingMode_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600042A")]
	[Address(RVA = "0x4AA0B70", Offset = "0x4AA0B70", VA = "0x4AA0B70")]
	private static extern void set_shadowCastingMode_Injected(IntPtr _unity_self, ShadowCastingMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600042B")]
	[Address(RVA = "0x4AA0C50", Offset = "0x4AA0C50", VA = "0x4AA0C50")]
	private static extern bool get_receiveShadows_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600042C")]
	[Address(RVA = "0x4AA0D20", Offset = "0x4AA0D20", VA = "0x4AA0D20")]
	private static extern void set_receiveShadows_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600042D")]
	[Address(RVA = "0x4AA0E00", Offset = "0x4AA0E00", VA = "0x4AA0E00")]
	private static extern void SetIsStaticShadowCaster_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600042E")]
	[Address(RVA = "0x4AA0F80", Offset = "0x4AA0F80", VA = "0x4AA0F80")]
	private static extern int get_sortingLayerID_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600042F")]
	[Address(RVA = "0x4AA1050", Offset = "0x4AA1050", VA = "0x4AA1050")]
	private static extern void set_sortingLayerID_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000430")]
	[Address(RVA = "0x4AA1130", Offset = "0x4AA1130", VA = "0x4AA1130")]
	private static extern int get_sortingOrder_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000431")]
	[Address(RVA = "0x4AA1200", Offset = "0x4AA1200", VA = "0x4AA1200")]
	private static extern void set_sortingOrder_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000432")]
	[Address(RVA = "0x4AA12E0", Offset = "0x4AA12E0", VA = "0x4AA12E0")]
	private static extern int get_sortingGroupID_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000433")]
	[Address(RVA = "0x4AA13B0", Offset = "0x4AA13B0", VA = "0x4AA13B0")]
	private static extern int get_sortingGroupOrder_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000434")]
	[Address(RVA = "0x4AA1480", Offset = "0x4AA1480", VA = "0x4AA1480")]
	private static extern Material[] GetSharedMaterialArray_Injected(IntPtr _unity_self);
}
