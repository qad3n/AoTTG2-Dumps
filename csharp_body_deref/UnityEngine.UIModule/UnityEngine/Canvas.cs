// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Canvas
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000009")]
[UnityEngine.Bindings.NativeHeader("Modules/UI/UIStructs.h")]
[UnityEngine.Bindings.NativeHeader("Modules/UI/CanvasManager.h")]
[UnityEngine.Bindings.NativeHeader("Modules/UI/Canvas.h")]
[UnityEngine.UIModuleHelpURL("class-Canvas")]
[RequireComponent(typeof(RectTransform))]
[UnityEngine.NativeClass("UI::Canvas")]
public sealed class Canvas : Behaviour
{
	[Token(Token = "0x200000A")]
	public delegate void WillRenderCanvases();

	[Token(Token = "0x400000E")]
	[FieldOffset(Offset = "0x0")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static WillRenderCanvases m_preWillRenderCanvases;

	[Token(Token = "0x400000F")]
	[FieldOffset(Offset = "0x8")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static WillRenderCanvases m_willRenderCanvases;

	[Token(Token = "0x1700000D")]
	public RenderMode renderMode
	{
		[Token(Token = "0x6000065")]
		[Address(RVA = "0x32BF6C0", Offset = "0x32BDCC0", VA = "0x1832BF6C0")]
		get
		{
			return default(RenderMode);
		}
		[Token(Token = "0x6000066")]
		[Address(RVA = "0x32C0310", Offset = "0x32BE910", VA = "0x1832C0310")]
		set
		{
		}
	}

	[Token(Token = "0x1700000E")]
	public bool isRootCanvas
	{
		[Token(Token = "0x6000067")]
		[Address(RVA = "0x32BF3C0", Offset = "0x32BD9C0", VA = "0x1832BF3C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000F")]
	public float scaleFactor
	{
		[Token(Token = "0x6000068")]
		[Address(RVA = "0x32BFA00", Offset = "0x32BE000", VA = "0x1832BFA00")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000069")]
		[Address(RVA = "0x32C03F0", Offset = "0x32BE9F0", VA = "0x1832C03F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public float referencePixelsPerUnit
	{
		[Token(Token = "0x600006A")]
		[Address(RVA = "0x32BF600", Offset = "0x32BDC00", VA = "0x1832BF600")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600006B")]
		[Address(RVA = "0x32C0240", Offset = "0x32BE840", VA = "0x1832C0240")]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public bool pixelPerfect
	{
		[Token(Token = "0x600006C")]
		[Address(RVA = "0x32BF540", Offset = "0x32BDB40", VA = "0x1832BF540")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000012")]
	public int renderOrder
	{
		[Token(Token = "0x600006D")]
		[Address(RVA = "0x32BF780", Offset = "0x32BDD80", VA = "0x1832BF780")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000013")]
	public bool overrideSorting
	{
		[Token(Token = "0x600006E")]
		[Address(RVA = "0x32BF480", Offset = "0x32BDA80", VA = "0x1832BF480")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600006F")]
		[Address(RVA = "0x32C0160", Offset = "0x32BE760", VA = "0x1832C0160")]
		set
		{
		}
	}

	[Token(Token = "0x17000014")]
	public int sortingOrder
	{
		[Token(Token = "0x6000070")]
		[Address(RVA = "0x32BFB80", Offset = "0x32BE180", VA = "0x1832BFB80")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000071")]
		[Address(RVA = "0x32C0590", Offset = "0x32BEB90", VA = "0x1832C0590")]
		set
		{
		}
	}

	[Token(Token = "0x17000015")]
	public int targetDisplay
	{
		[Token(Token = "0x6000072")]
		[Address(RVA = "0x32BFC40", Offset = "0x32BE240", VA = "0x1832BFC40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000016")]
	public int sortingLayerID
	{
		[Token(Token = "0x6000073")]
		[Address(RVA = "0x32BFAC0", Offset = "0x32BE0C0", VA = "0x1832BFAC0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000074")]
		[Address(RVA = "0x32C04C0", Offset = "0x32BEAC0", VA = "0x1832C04C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public AdditionalCanvasShaderChannels additionalShaderChannels
	{
		[Token(Token = "0x6000075")]
		[Address(RVA = "0x32BF240", Offset = "0x32BD840", VA = "0x1832BF240")]
		get
		{
			return default(AdditionalCanvasShaderChannels);
		}
		[Token(Token = "0x6000076")]
		[Address(RVA = "0x32BFF60", Offset = "0x32BE560", VA = "0x1832BFF60")]
		set
		{
		}
	}

	[Token(Token = "0x17000018")]
	public Canvas rootCanvas
	{
		[Token(Token = "0x6000077")]
		[Address(RVA = "0x32BF920", Offset = "0x32BDF20", VA = "0x1832BF920")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000019")]
	public Vector2 renderingDisplaySize
	{
		[Token(Token = "0x6000078")]
		[Address(RVA = "0x32BF850", Offset = "0x32BDE50", VA = "0x1832BF850")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x1700001A")]
	internal static Action<int> externBeginRenderOverlays
	{
		[Token(Token = "0x6000079")]
		[Address(RVA = "0x32BF2C0", Offset = "0x32BD8C0", VA = "0x1832BF2C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600007A")]
		[Address(RVA = "0x32BFFF0", Offset = "0x32BE5F0", VA = "0x1832BFFF0")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001B")]
	internal static Action<int, int> externRenderOverlaysBefore
	{
		[Token(Token = "0x600007B")]
		[Address(RVA = "0x32BF340", Offset = "0x32BD940", VA = "0x1832BF340")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600007C")]
		[Address(RVA = "0x32C00B0", Offset = "0x32BE6B0", VA = "0x1832C00B0")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001C")]
	internal static Action<int> externEndRenderOverlays
	{
		[Token(Token = "0x600007D")]
		[Address(RVA = "0x32BF300", Offset = "0x32BD900", VA = "0x1832BF300")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600007E")]
		[Address(RVA = "0x32C0050", Offset = "0x32BE650", VA = "0x1832C0050")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001D")]
	[UnityEngine.Bindings.NativeProperty("Camera", false, UnityEngine.Bindings.TargetType.Function)]
	public Camera worldCamera
	{
		[Token(Token = "0x6000080")]
		[Address(RVA = "0x32BFD00", Offset = "0x32BE300", VA = "0x1832BFD00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x14000001")]
	public static event WillRenderCanvases preWillRenderCanvases
	{
		[Token(Token = "0x6000061")]
		[Address(RVA = "0x32BF080", Offset = "0x32BD680", VA = "0x1832BF080")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000062")]
		[Address(RVA = "0x32BFDA0", Offset = "0x32BE3A0", VA = "0x1832BFDA0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000002")]
	public static event WillRenderCanvases willRenderCanvases
	{
		[Token(Token = "0x6000063")]
		[Address(RVA = "0x32BF140", Offset = "0x32BD740", VA = "0x1832BF140")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000064")]
		[Address(RVA = "0x32BFE60", Offset = "0x32BE460", VA = "0x1832BFE60")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007F")]
	[Address(RVA = "0x32BF040", Offset = "0x32BD640", VA = "0x1832BF040")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	[UnityEngine.Bindings.FreeFunction("UI::CanvasManager::SetExternalCanvasEnabled")]
	internal static extern void SetExternalCanvasEnabled(bool enabled);

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x32BEE50", Offset = "0x32BD450", VA = "0x1832BEE50")]
	[UnityEngine.Bindings.FreeFunction("UI::GetDefaultUIMaterial")]
	public static Material GetDefaultCanvasMaterial()
	{
		return null;
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x32BEEE0", Offset = "0x32BD4E0", VA = "0x1832BEEE0")]
	[UnityEngine.Bindings.FreeFunction("UI::GetETC1SupportedCanvasMaterial")]
	public static Material GetETC1SupportedCanvasMaterial()
	{
		return null;
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x32BED90", Offset = "0x32BD390", VA = "0x1832BED90")]
	public static void ForceUpdateCanvases()
	{
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x32BEFA0", Offset = "0x32BD5A0", VA = "0x1832BEFA0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void SendPreWillRenderCanvases()
	{
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x32BEFF0", Offset = "0x32BD5F0", VA = "0x1832BEFF0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void SendWillRenderCanvases()
	{
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x32BECD0", Offset = "0x32BD2D0", VA = "0x1832BECD0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void BeginRenderExtraOverlays(int displayIndex)
	{
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x32BEF40", Offset = "0x32BD540", VA = "0x1832BEF40")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void RenderExtraOverlaysBefore(int displayIndex, int sortingOrder)
	{
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x32BED30", Offset = "0x32BD330", VA = "0x1832BED30")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void EndRenderExtraOverlays(int displayIndex)
	{
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public Canvas()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008A")]
	[Address(RVA = "0x32BF680", Offset = "0x32BDC80", VA = "0x1832BF680")]
	private static extern RenderMode get_renderMode_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008B")]
	[Address(RVA = "0x32C02D0", Offset = "0x32BE8D0", VA = "0x1832C02D0")]
	private static extern void set_renderMode_Injected(IntPtr _unity_self, RenderMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008C")]
	[Address(RVA = "0x32BF380", Offset = "0x32BD980", VA = "0x1832BF380")]
	private static extern bool get_isRootCanvas_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008D")]
	[Address(RVA = "0x32BF9C0", Offset = "0x32BDFC0", VA = "0x1832BF9C0")]
	private static extern float get_scaleFactor_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008E")]
	[Address(RVA = "0x32C03A0", Offset = "0x32BE9A0", VA = "0x1832C03A0")]
	private static extern void set_scaleFactor_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008F")]
	[Address(RVA = "0x32BF5C0", Offset = "0x32BDBC0", VA = "0x1832BF5C0")]
	private static extern float get_referencePixelsPerUnit_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000090")]
	[Address(RVA = "0x32C01F0", Offset = "0x32BE7F0", VA = "0x1832C01F0")]
	private static extern void set_referencePixelsPerUnit_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000091")]
	[Address(RVA = "0x32BF500", Offset = "0x32BDB00", VA = "0x1832BF500")]
	private static extern bool get_pixelPerfect_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000092")]
	[Address(RVA = "0x32BF740", Offset = "0x32BDD40", VA = "0x1832BF740")]
	private static extern int get_renderOrder_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000093")]
	[Address(RVA = "0x32BF440", Offset = "0x32BDA40", VA = "0x1832BF440")]
	private static extern bool get_overrideSorting_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000094")]
	[Address(RVA = "0x32C0110", Offset = "0x32BE710", VA = "0x1832C0110")]
	private static extern void set_overrideSorting_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000095")]
	[Address(RVA = "0x32BFB40", Offset = "0x32BE140", VA = "0x1832BFB40")]
	private static extern int get_sortingOrder_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000096")]
	[Address(RVA = "0x32C0550", Offset = "0x32BEB50", VA = "0x1832C0550")]
	private static extern void set_sortingOrder_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000097")]
	[Address(RVA = "0x32BFC00", Offset = "0x32BE200", VA = "0x1832BFC00")]
	private static extern int get_targetDisplay_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000098")]
	[Address(RVA = "0x32BFA80", Offset = "0x32BE080", VA = "0x1832BFA80")]
	private static extern int get_sortingLayerID_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000099")]
	[Address(RVA = "0x32C0480", Offset = "0x32BEA80", VA = "0x1832C0480")]
	private static extern void set_sortingLayerID_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009A")]
	[Address(RVA = "0x32BF200", Offset = "0x32BD800", VA = "0x1832BF200")]
	private static extern AdditionalCanvasShaderChannels get_additionalShaderChannels_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009B")]
	[Address(RVA = "0x32BFF20", Offset = "0x32BE520", VA = "0x1832BFF20")]
	private static extern void set_additionalShaderChannels_Injected(IntPtr _unity_self, AdditionalCanvasShaderChannels value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009C")]
	[Address(RVA = "0x32BF8E0", Offset = "0x32BDEE0", VA = "0x1832BF8E0")]
	private static extern IntPtr get_rootCanvas_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009D")]
	[Address(RVA = "0x32BF800", Offset = "0x32BDE00", VA = "0x1832BF800")]
	private static extern void get_renderingDisplaySize_Injected(IntPtr _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009E")]
	[Address(RVA = "0x32BFCC0", Offset = "0x32BE2C0", VA = "0x1832BFCC0")]
	private static extern IntPtr get_worldCamera_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009F")]
	[Address(RVA = "0x32BEE20", Offset = "0x32BD420", VA = "0x1832BEE20")]
	private static extern IntPtr GetDefaultCanvasMaterial_Injected();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x32BEEB0", Offset = "0x32BD4B0", VA = "0x1832BEEB0")]
	private static extern IntPtr GetETC1SupportedCanvasMaterial_Injected();
}
