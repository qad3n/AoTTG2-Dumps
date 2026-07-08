using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000008")]
[UnityEngine.Bindings.NativeHeader("Modules/UI/UIStructs.h")]
[UnityEngine.Bindings.NativeHeader("Modules/UI/Canvas.h")]
[UnityEngine.Bindings.NativeHeader("Modules/UI/CanvasManager.h")]
[UnityEngine.NativeClass("UI::Canvas")]
[RequireComponent(typeof(RectTransform))]
public sealed class Canvas : Behaviour
{
	[Token(Token = "0x2000009")]
	public delegate void WillRenderCanvases();

	[Token(Token = "0x1700000D")]
	public RenderMode renderMode
	{
		[Token(Token = "0x600005C")]
		[Address(RVA = "0x4D96180", Offset = "0x4D96180", VA = "0x4D96180")]
		get
		{
			return default(RenderMode);
		}
		[Token(Token = "0x600005D")]
		[Address(RVA = "0x4D96250", Offset = "0x4D96250", VA = "0x4D96250")]
		set
		{
		}
	}

	[Token(Token = "0x1700000E")]
	public bool isRootCanvas
	{
		[Token(Token = "0x600005E")]
		[Address(RVA = "0x4D96330", Offset = "0x4D96330", VA = "0x4D96330")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000F")]
	public float scaleFactor
	{
		[Token(Token = "0x600005F")]
		[Address(RVA = "0x4D96400", Offset = "0x4D96400", VA = "0x4D96400")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000060")]
		[Address(RVA = "0x4D964D0", Offset = "0x4D964D0", VA = "0x4D964D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public float referencePixelsPerUnit
	{
		[Token(Token = "0x6000061")]
		[Address(RVA = "0x4D965D0", Offset = "0x4D965D0", VA = "0x4D965D0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000062")]
		[Address(RVA = "0x4D966A0", Offset = "0x4D966A0", VA = "0x4D966A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public bool pixelPerfect
	{
		[Token(Token = "0x6000063")]
		[Address(RVA = "0x4D967A0", Offset = "0x4D967A0", VA = "0x4D967A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000012")]
	public int renderOrder
	{
		[Token(Token = "0x6000064")]
		[Address(RVA = "0x4D96870", Offset = "0x4D96870", VA = "0x4D96870")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000013")]
	public bool overrideSorting
	{
		[Token(Token = "0x6000065")]
		[Address(RVA = "0x4D96940", Offset = "0x4D96940", VA = "0x4D96940")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000066")]
		[Address(RVA = "0x4D96A10", Offset = "0x4D96A10", VA = "0x4D96A10")]
		set
		{
		}
	}

	[Token(Token = "0x17000014")]
	public int sortingOrder
	{
		[Token(Token = "0x6000067")]
		[Address(RVA = "0x4D96AF0", Offset = "0x4D96AF0", VA = "0x4D96AF0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000068")]
		[Address(RVA = "0x4D96BC0", Offset = "0x4D96BC0", VA = "0x4D96BC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000015")]
	public int targetDisplay
	{
		[Token(Token = "0x6000069")]
		[Address(RVA = "0x4D96CA0", Offset = "0x4D96CA0", VA = "0x4D96CA0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000016")]
	public int sortingLayerID
	{
		[Token(Token = "0x600006A")]
		[Address(RVA = "0x4D96D70", Offset = "0x4D96D70", VA = "0x4D96D70")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600006B")]
		[Address(RVA = "0x4D96E40", Offset = "0x4D96E40", VA = "0x4D96E40")]
		set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public AdditionalCanvasShaderChannels additionalShaderChannels
	{
		[Token(Token = "0x600006C")]
		[Address(RVA = "0x4D96F20", Offset = "0x4D96F20", VA = "0x4D96F20")]
		get
		{
			return default(AdditionalCanvasShaderChannels);
		}
		[Token(Token = "0x600006D")]
		[Address(RVA = "0x4D96FF0", Offset = "0x4D96FF0", VA = "0x4D96FF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000018")]
	public Canvas rootCanvas
	{
		[Token(Token = "0x600006E")]
		[Address(RVA = "0x4D970D0", Offset = "0x4D970D0", VA = "0x4D970D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000019")]
	public Vector2 renderingDisplaySize
	{
		[Token(Token = "0x600006F")]
		[Address(RVA = "0x4D971A0", Offset = "0x4D971A0", VA = "0x4D971A0")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x1700001A")]
	internal static Action<int> externBeginRenderOverlays
	{
		[Token(Token = "0x6000070")]
		[Address(RVA = "0x4D97290", Offset = "0x4D97290", VA = "0x4D97290")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000071")]
		[Address(RVA = "0x4D972D0", Offset = "0x4D972D0", VA = "0x4D972D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001B")]
	internal static Action<int, int> externRenderOverlaysBefore
	{
		[Token(Token = "0x6000072")]
		[Address(RVA = "0x4D97320", Offset = "0x4D97320", VA = "0x4D97320")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000073")]
		[Address(RVA = "0x4D97360", Offset = "0x4D97360", VA = "0x4D97360")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001C")]
	internal static Action<int> externEndRenderOverlays
	{
		[Token(Token = "0x6000074")]
		[Address(RVA = "0x4D973B0", Offset = "0x4D973B0", VA = "0x4D973B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000075")]
		[Address(RVA = "0x4D973F0", Offset = "0x4D973F0", VA = "0x4D973F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001D")]
	[UnityEngine.Bindings.NativeProperty("Camera", false, UnityEngine.Bindings.TargetType.Function)]
	public Camera worldCamera
	{
		[Token(Token = "0x6000077")]
		[Address(RVA = "0x4D97470", Offset = "0x4D97470", VA = "0x4D97470")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x14000001")]
	public static event WillRenderCanvases preWillRenderCanvases
	{
		[Token(Token = "0x6000058")]
		[Address(RVA = "0x4D95EC0", Offset = "0x4D95EC0", VA = "0x4D95EC0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000059")]
		[Address(RVA = "0x4D95F60", Offset = "0x4D95F60", VA = "0x4D95F60")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000002")]
	public static event WillRenderCanvases willRenderCanvases
	{
		[Token(Token = "0x600005A")]
		[Address(RVA = "0x4D96000", Offset = "0x4D96000", VA = "0x4D96000")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600005B")]
		[Address(RVA = "0x4D960C0", Offset = "0x4D960C0", VA = "0x4D960C0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000076")]
	[Address(RVA = "0x4D97440", Offset = "0x4D97440", VA = "0x4D97440")]
	[UnityEngine.Bindings.FreeFunction("UI::CanvasManager::SetExternalCanvasEnabled")]
	internal static extern void SetExternalCanvasEnabled(bool enabled);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000078")]
	[Address(RVA = "0x4D97540", Offset = "0x4D97540", VA = "0x4D97540")]
	[UnityEngine.Bindings.FreeFunction("UI::GetDefaultUIMaterial")]
	public static extern Material GetDefaultCanvasMaterial();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000079")]
	[Address(RVA = "0x4D97570", Offset = "0x4D97570", VA = "0x4D97570")]
	[UnityEngine.Bindings.FreeFunction("UI::GetETC1SupportedCanvasMaterial")]
	public static extern Material GetETC1SupportedCanvasMaterial();

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x4D975A0", Offset = "0x4D975A0", VA = "0x4D975A0")]
	public static void ForceUpdateCanvases()
	{
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x4D97630", Offset = "0x4D97630", VA = "0x4D97630")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void SendPreWillRenderCanvases()
	{
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x4D97680", Offset = "0x4D97680", VA = "0x4D97680")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void SendWillRenderCanvases()
	{
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x4D976D0", Offset = "0x4D976D0", VA = "0x4D976D0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void BeginRenderExtraOverlays(int displayIndex)
	{
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x4D97720", Offset = "0x4D97720", VA = "0x4D97720")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void RenderExtraOverlaysBefore(int displayIndex, int sortingOrder)
	{
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x4D97780", Offset = "0x4D97780", VA = "0x4D97780")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void EndRenderExtraOverlays(int displayIndex)
	{
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x4D977D0", Offset = "0x4D977D0", VA = "0x4D977D0")]
	public Canvas()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000081")]
	[Address(RVA = "0x4D96220", Offset = "0x4D96220", VA = "0x4D96220")]
	private static extern RenderMode get_renderMode_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000082")]
	[Address(RVA = "0x4D962F0", Offset = "0x4D962F0", VA = "0x4D962F0")]
	private static extern void set_renderMode_Injected(IntPtr _unity_self, RenderMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000083")]
	[Address(RVA = "0x4D963D0", Offset = "0x4D963D0", VA = "0x4D963D0")]
	private static extern bool get_isRootCanvas_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000084")]
	[Address(RVA = "0x4D964A0", Offset = "0x4D964A0", VA = "0x4D964A0")]
	private static extern float get_scaleFactor_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000085")]
	[Address(RVA = "0x4D96580", Offset = "0x4D96580", VA = "0x4D96580")]
	private static extern void set_scaleFactor_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000086")]
	[Address(RVA = "0x4D96670", Offset = "0x4D96670", VA = "0x4D96670")]
	private static extern float get_referencePixelsPerUnit_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000087")]
	[Address(RVA = "0x4D96750", Offset = "0x4D96750", VA = "0x4D96750")]
	private static extern void set_referencePixelsPerUnit_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000088")]
	[Address(RVA = "0x4D96840", Offset = "0x4D96840", VA = "0x4D96840")]
	private static extern bool get_pixelPerfect_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000089")]
	[Address(RVA = "0x4D96910", Offset = "0x4D96910", VA = "0x4D96910")]
	private static extern int get_renderOrder_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008A")]
	[Address(RVA = "0x4D969E0", Offset = "0x4D969E0", VA = "0x4D969E0")]
	private static extern bool get_overrideSorting_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008B")]
	[Address(RVA = "0x4D96AB0", Offset = "0x4D96AB0", VA = "0x4D96AB0")]
	private static extern void set_overrideSorting_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008C")]
	[Address(RVA = "0x4D96B90", Offset = "0x4D96B90", VA = "0x4D96B90")]
	private static extern int get_sortingOrder_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008D")]
	[Address(RVA = "0x4D96C60", Offset = "0x4D96C60", VA = "0x4D96C60")]
	private static extern void set_sortingOrder_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008E")]
	[Address(RVA = "0x4D96D40", Offset = "0x4D96D40", VA = "0x4D96D40")]
	private static extern int get_targetDisplay_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008F")]
	[Address(RVA = "0x4D96E10", Offset = "0x4D96E10", VA = "0x4D96E10")]
	private static extern int get_sortingLayerID_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000090")]
	[Address(RVA = "0x4D96EE0", Offset = "0x4D96EE0", VA = "0x4D96EE0")]
	private static extern void set_sortingLayerID_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000091")]
	[Address(RVA = "0x4D96FC0", Offset = "0x4D96FC0", VA = "0x4D96FC0")]
	private static extern AdditionalCanvasShaderChannels get_additionalShaderChannels_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000092")]
	[Address(RVA = "0x4D97090", Offset = "0x4D97090", VA = "0x4D97090")]
	private static extern void set_additionalShaderChannels_Injected(IntPtr _unity_self, AdditionalCanvasShaderChannels value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000093")]
	[Address(RVA = "0x4D97170", Offset = "0x4D97170", VA = "0x4D97170")]
	private static extern Canvas get_rootCanvas_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000094")]
	[Address(RVA = "0x4D97250", Offset = "0x4D97250", VA = "0x4D97250")]
	private static extern void get_renderingDisplaySize_Injected(IntPtr _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000095")]
	[Address(RVA = "0x4D97510", Offset = "0x4D97510", VA = "0x4D97510")]
	private static extern Camera get_worldCamera_Injected(IntPtr _unity_self);
}
