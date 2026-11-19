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
[RequireComponent(typeof(RectTransform))]
[UnityEngine.NativeClass("UI::Canvas")]
[UnityEngine.UIModuleHelpURL("class-Canvas")]
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
		[Token(Token = "0x6000064")]
		[Address(RVA = "0x6CCD010", Offset = "0x6CCC010", VA = "0x6CCD010")]
		get
		{
			return default(RenderMode);
		}
		[Token(Token = "0x6000065")]
		[Address(RVA = "0x6CCD0C0", Offset = "0x6CCC0C0", VA = "0x6CCD0C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000E")]
	public bool isRootCanvas
	{
		[Token(Token = "0x6000066")]
		[Address(RVA = "0x6CCD180", Offset = "0x6CCC180", VA = "0x6CCD180")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000F")]
	public Rect pixelRect
	{
		[Token(Token = "0x6000067")]
		[Address(RVA = "0x6CCD230", Offset = "0x6CCC230", VA = "0x6CCD230")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x17000010")]
	public float scaleFactor
	{
		[Token(Token = "0x6000068")]
		[Address(RVA = "0x6CCD310", Offset = "0x6CCC310", VA = "0x6CCD310")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000069")]
		[Address(RVA = "0x6CCD3C0", Offset = "0x6CCC3C0", VA = "0x6CCD3C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public float referencePixelsPerUnit
	{
		[Token(Token = "0x600006A")]
		[Address(RVA = "0x6CCD4A0", Offset = "0x6CCC4A0", VA = "0x6CCD4A0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600006B")]
		[Address(RVA = "0x6CCD550", Offset = "0x6CCC550", VA = "0x6CCD550")]
		set
		{
		}
	}

	[Token(Token = "0x17000012")]
	public bool pixelPerfect
	{
		[Token(Token = "0x600006C")]
		[Address(RVA = "0x6CCD630", Offset = "0x6CCC630", VA = "0x6CCD630")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000013")]
	public int renderOrder
	{
		[Token(Token = "0x600006D")]
		[Address(RVA = "0x6CCD6E0", Offset = "0x6CCC6E0", VA = "0x6CCD6E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000014")]
	public bool overrideSorting
	{
		[Token(Token = "0x600006E")]
		[Address(RVA = "0x6CCD790", Offset = "0x6CCC790", VA = "0x6CCD790")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600006F")]
		[Address(RVA = "0x6CCD840", Offset = "0x6CCC840", VA = "0x6CCD840")]
		set
		{
		}
	}

	[Token(Token = "0x17000015")]
	public int sortingOrder
	{
		[Token(Token = "0x6000070")]
		[Address(RVA = "0x6CCD900", Offset = "0x6CCC900", VA = "0x6CCD900")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000071")]
		[Address(RVA = "0x6CCD9B0", Offset = "0x6CCC9B0", VA = "0x6CCD9B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000016")]
	public int targetDisplay
	{
		[Token(Token = "0x6000072")]
		[Address(RVA = "0x6CCDA70", Offset = "0x6CCCA70", VA = "0x6CCDA70")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000017")]
	public int sortingLayerID
	{
		[Token(Token = "0x6000073")]
		[Address(RVA = "0x6CCDB20", Offset = "0x6CCCB20", VA = "0x6CCDB20")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000074")]
		[Address(RVA = "0x6CCDBD0", Offset = "0x6CCCBD0", VA = "0x6CCDBD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000018")]
	public AdditionalCanvasShaderChannels additionalShaderChannels
	{
		[Token(Token = "0x6000075")]
		[Address(RVA = "0x6CCDC90", Offset = "0x6CCCC90", VA = "0x6CCDC90")]
		get
		{
			return default(AdditionalCanvasShaderChannels);
		}
		[Token(Token = "0x6000076")]
		[Address(RVA = "0x6CCDD40", Offset = "0x6CCCD40", VA = "0x6CCDD40")]
		set
		{
		}
	}

	[Token(Token = "0x17000019")]
	public Canvas rootCanvas
	{
		[Token(Token = "0x6000077")]
		[Address(RVA = "0x6CCDE00", Offset = "0x6CCCE00", VA = "0x6CCDE00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001A")]
	public Vector2 renderingDisplaySize
	{
		[Token(Token = "0x6000078")]
		[Address(RVA = "0x6CCDED0", Offset = "0x6CCCED0", VA = "0x6CCDED0")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x1700001B")]
	internal static Action<int> externBeginRenderOverlays
	{
		[Token(Token = "0x6000079")]
		[Address(RVA = "0x6CCDFA0", Offset = "0x6CCCFA0", VA = "0x6CCDFA0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600007A")]
		[Address(RVA = "0x6CCDFE0", Offset = "0x6CCCFE0", VA = "0x6CCDFE0")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001C")]
	internal static Action<int, int> externRenderOverlaysBefore
	{
		[Token(Token = "0x600007B")]
		[Address(RVA = "0x6CCE030", Offset = "0x6CCD030", VA = "0x6CCE030")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600007C")]
		[Address(RVA = "0x6CCE070", Offset = "0x6CCD070", VA = "0x6CCE070")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001D")]
	internal static Action<int> externEndRenderOverlays
	{
		[Token(Token = "0x600007D")]
		[Address(RVA = "0x6CCE0C0", Offset = "0x6CCD0C0", VA = "0x6CCE0C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600007E")]
		[Address(RVA = "0x6CCE100", Offset = "0x6CCD100", VA = "0x6CCE100")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001E")]
	[UnityEngine.Bindings.NativeProperty("Camera", false, UnityEngine.Bindings.TargetType.Function)]
	public Camera worldCamera
	{
		[Token(Token = "0x6000080")]
		[Address(RVA = "0x6CCE180", Offset = "0x6CCD180", VA = "0x6CCE180")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x14000001")]
	public static event WillRenderCanvases preWillRenderCanvases
	{
		[Token(Token = "0x6000060")]
		[Address(RVA = "0x6CCCD70", Offset = "0x6CCBD70", VA = "0x6CCCD70")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000061")]
		[Address(RVA = "0x6CCCE10", Offset = "0x6CCBE10", VA = "0x6CCCE10")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000002")]
	public static event WillRenderCanvases willRenderCanvases
	{
		[Token(Token = "0x6000062")]
		[Address(RVA = "0x6CCCEB0", Offset = "0x6CCBEB0", VA = "0x6CCCEB0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000063")]
		[Address(RVA = "0x6CCCF60", Offset = "0x6CCBF60", VA = "0x6CCCF60")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007F")]
	[Address(RVA = "0x6CCE150", Offset = "0x6CCD150", VA = "0x6CCE150")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	[UnityEngine.Bindings.FreeFunction("UI::CanvasManager::SetExternalCanvasEnabled")]
	internal static extern void SetExternalCanvasEnabled(bool enabled);

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x6CCE250", Offset = "0x6CCD250", VA = "0x6CCE250")]
	[UnityEngine.Bindings.FreeFunction("UI::GetDefaultUIMaterial")]
	public static Material GetDefaultCanvasMaterial()
	{
		return null;
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x6CCE2E0", Offset = "0x6CCD2E0", VA = "0x6CCE2E0")]
	[UnityEngine.Bindings.FreeFunction("UI::GetETC1SupportedCanvasMaterial")]
	public static Material GetETC1SupportedCanvasMaterial()
	{
		return null;
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x6CCE370", Offset = "0x6CCD370", VA = "0x6CCE370")]
	public static void ForceUpdateCanvases()
	{
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x6CCE400", Offset = "0x6CCD400", VA = "0x6CCE400")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void SendPreWillRenderCanvases()
	{
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x6CCE450", Offset = "0x6CCD450", VA = "0x6CCE450")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void SendWillRenderCanvases()
	{
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x6CCE4A0", Offset = "0x6CCD4A0", VA = "0x6CCE4A0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void BeginRenderExtraOverlays(int displayIndex)
	{
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x6CCE4F0", Offset = "0x6CCD4F0", VA = "0x6CCE4F0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void RenderExtraOverlaysBefore(int displayIndex, int sortingOrder)
	{
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x6CCE550", Offset = "0x6CCD550", VA = "0x6CCE550")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void EndRenderExtraOverlays(int displayIndex)
	{
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x6CCE5A0", Offset = "0x6CCD5A0", VA = "0x6CCE5A0")]
	public Canvas()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008A")]
	[Address(RVA = "0x6CCD090", Offset = "0x6CCC090", VA = "0x6CCD090")]
	private static extern RenderMode get_renderMode_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008B")]
	[Address(RVA = "0x6CCD140", Offset = "0x6CCC140", VA = "0x6CCD140")]
	private static extern void set_renderMode_Injected(IntPtr _unity_self, RenderMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008C")]
	[Address(RVA = "0x6CCD200", Offset = "0x6CCC200", VA = "0x6CCD200")]
	private static extern bool get_isRootCanvas_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008D")]
	[Address(RVA = "0x6CCD2D0", Offset = "0x6CCC2D0", VA = "0x6CCD2D0")]
	private static extern void get_pixelRect_Injected(IntPtr _unity_self, out Rect ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008E")]
	[Address(RVA = "0x6CCD390", Offset = "0x6CCC390", VA = "0x6CCD390")]
	private static extern float get_scaleFactor_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008F")]
	[Address(RVA = "0x6CCD450", Offset = "0x6CCC450", VA = "0x6CCD450")]
	private static extern void set_scaleFactor_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000090")]
	[Address(RVA = "0x6CCD520", Offset = "0x6CCC520", VA = "0x6CCD520")]
	private static extern float get_referencePixelsPerUnit_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000091")]
	[Address(RVA = "0x6CCD5E0", Offset = "0x6CCC5E0", VA = "0x6CCD5E0")]
	private static extern void set_referencePixelsPerUnit_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000092")]
	[Address(RVA = "0x6CCD6B0", Offset = "0x6CCC6B0", VA = "0x6CCD6B0")]
	private static extern bool get_pixelPerfect_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000093")]
	[Address(RVA = "0x6CCD760", Offset = "0x6CCC760", VA = "0x6CCD760")]
	private static extern int get_renderOrder_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000094")]
	[Address(RVA = "0x6CCD810", Offset = "0x6CCC810", VA = "0x6CCD810")]
	private static extern bool get_overrideSorting_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000095")]
	[Address(RVA = "0x6CCD8C0", Offset = "0x6CCC8C0", VA = "0x6CCD8C0")]
	private static extern void set_overrideSorting_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000096")]
	[Address(RVA = "0x6CCD980", Offset = "0x6CCC980", VA = "0x6CCD980")]
	private static extern int get_sortingOrder_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000097")]
	[Address(RVA = "0x6CCDA30", Offset = "0x6CCCA30", VA = "0x6CCDA30")]
	private static extern void set_sortingOrder_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000098")]
	[Address(RVA = "0x6CCDAF0", Offset = "0x6CCCAF0", VA = "0x6CCDAF0")]
	private static extern int get_targetDisplay_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000099")]
	[Address(RVA = "0x6CCDBA0", Offset = "0x6CCCBA0", VA = "0x6CCDBA0")]
	private static extern int get_sortingLayerID_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009A")]
	[Address(RVA = "0x6CCDC50", Offset = "0x6CCCC50", VA = "0x6CCDC50")]
	private static extern void set_sortingLayerID_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009B")]
	[Address(RVA = "0x6CCDD10", Offset = "0x6CCCD10", VA = "0x6CCDD10")]
	private static extern AdditionalCanvasShaderChannels get_additionalShaderChannels_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009C")]
	[Address(RVA = "0x6CCDDC0", Offset = "0x6CCCDC0", VA = "0x6CCDDC0")]
	private static extern void set_additionalShaderChannels_Injected(IntPtr _unity_self, AdditionalCanvasShaderChannels value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009D")]
	[Address(RVA = "0x6CCDEA0", Offset = "0x6CCCEA0", VA = "0x6CCDEA0")]
	private static extern IntPtr get_rootCanvas_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009E")]
	[Address(RVA = "0x6CCDF60", Offset = "0x6CCCF60", VA = "0x6CCDF60")]
	private static extern void get_renderingDisplaySize_Injected(IntPtr _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009F")]
	[Address(RVA = "0x6CCE220", Offset = "0x6CCD220", VA = "0x6CCE220")]
	private static extern IntPtr get_worldCamera_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x6CCE2B0", Offset = "0x6CCD2B0", VA = "0x6CCE2B0")]
	private static extern IntPtr GetDefaultCanvasMaterial_Injected();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x6CCE340", Offset = "0x6CCD340", VA = "0x6CCE340")]
	private static extern IntPtr GetETC1SupportedCanvasMaterial_Injected();
}
