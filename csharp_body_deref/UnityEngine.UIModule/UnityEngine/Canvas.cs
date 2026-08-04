// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Canvas
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
		[Address(RVA = "0x50BDAB0", Offset = "0x50BDAB0", VA = "0x50BDAB0")]
		get
		{
			return default(RenderMode);
		}
		[Token(Token = "0x600005D")]
		[Address(RVA = "0x50BDB80", Offset = "0x50BDB80", VA = "0x50BDB80")]
		set
		{
		}
	}

	[Token(Token = "0x1700000E")]
	public bool isRootCanvas
	{
		[Token(Token = "0x600005E")]
		[Address(RVA = "0x50BDC60", Offset = "0x50BDC60", VA = "0x50BDC60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000F")]
	public float scaleFactor
	{
		[Token(Token = "0x600005F")]
		[Address(RVA = "0x50BDD30", Offset = "0x50BDD30", VA = "0x50BDD30")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000060")]
		[Address(RVA = "0x50BDE00", Offset = "0x50BDE00", VA = "0x50BDE00")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public float referencePixelsPerUnit
	{
		[Token(Token = "0x6000061")]
		[Address(RVA = "0x50BDF00", Offset = "0x50BDF00", VA = "0x50BDF00")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000062")]
		[Address(RVA = "0x50BDFD0", Offset = "0x50BDFD0", VA = "0x50BDFD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public bool pixelPerfect
	{
		[Token(Token = "0x6000063")]
		[Address(RVA = "0x50BE0D0", Offset = "0x50BE0D0", VA = "0x50BE0D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000012")]
	public int renderOrder
	{
		[Token(Token = "0x6000064")]
		[Address(RVA = "0x50BE1A0", Offset = "0x50BE1A0", VA = "0x50BE1A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000013")]
	public bool overrideSorting
	{
		[Token(Token = "0x6000065")]
		[Address(RVA = "0x50BE270", Offset = "0x50BE270", VA = "0x50BE270")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000066")]
		[Address(RVA = "0x50BE340", Offset = "0x50BE340", VA = "0x50BE340")]
		set
		{
		}
	}

	[Token(Token = "0x17000014")]
	public int sortingOrder
	{
		[Token(Token = "0x6000067")]
		[Address(RVA = "0x50BE420", Offset = "0x50BE420", VA = "0x50BE420")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000068")]
		[Address(RVA = "0x50BE4F0", Offset = "0x50BE4F0", VA = "0x50BE4F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000015")]
	public int targetDisplay
	{
		[Token(Token = "0x6000069")]
		[Address(RVA = "0x50BE5D0", Offset = "0x50BE5D0", VA = "0x50BE5D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000016")]
	public int sortingLayerID
	{
		[Token(Token = "0x600006A")]
		[Address(RVA = "0x50BE6A0", Offset = "0x50BE6A0", VA = "0x50BE6A0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600006B")]
		[Address(RVA = "0x50BE770", Offset = "0x50BE770", VA = "0x50BE770")]
		set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public AdditionalCanvasShaderChannels additionalShaderChannels
	{
		[Token(Token = "0x600006C")]
		[Address(RVA = "0x50BE850", Offset = "0x50BE850", VA = "0x50BE850")]
		get
		{
			return default(AdditionalCanvasShaderChannels);
		}
		[Token(Token = "0x600006D")]
		[Address(RVA = "0x50BE920", Offset = "0x50BE920", VA = "0x50BE920")]
		set
		{
		}
	}

	[Token(Token = "0x17000018")]
	public Canvas rootCanvas
	{
		[Token(Token = "0x600006E")]
		[Address(RVA = "0x50BEA00", Offset = "0x50BEA00", VA = "0x50BEA00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000019")]
	public Vector2 renderingDisplaySize
	{
		[Token(Token = "0x600006F")]
		[Address(RVA = "0x50BEAD0", Offset = "0x50BEAD0", VA = "0x50BEAD0")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x1700001A")]
	internal static Action<int> externBeginRenderOverlays
	{
		[Token(Token = "0x6000070")]
		[Address(RVA = "0x50BEBC0", Offset = "0x50BEBC0", VA = "0x50BEBC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000071")]
		[Address(RVA = "0x50BEC00", Offset = "0x50BEC00", VA = "0x50BEC00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001B")]
	internal static Action<int, int> externRenderOverlaysBefore
	{
		[Token(Token = "0x6000072")]
		[Address(RVA = "0x50BEC50", Offset = "0x50BEC50", VA = "0x50BEC50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000073")]
		[Address(RVA = "0x50BEC90", Offset = "0x50BEC90", VA = "0x50BEC90")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001C")]
	internal static Action<int> externEndRenderOverlays
	{
		[Token(Token = "0x6000074")]
		[Address(RVA = "0x50BECE0", Offset = "0x50BECE0", VA = "0x50BECE0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000075")]
		[Address(RVA = "0x50BED20", Offset = "0x50BED20", VA = "0x50BED20")]
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
		[Address(RVA = "0x50BEDA0", Offset = "0x50BEDA0", VA = "0x50BEDA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x14000001")]
	public static event WillRenderCanvases preWillRenderCanvases
	{
		[Token(Token = "0x6000058")]
		[Address(RVA = "0x50BD7F0", Offset = "0x50BD7F0", VA = "0x50BD7F0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000059")]
		[Address(RVA = "0x50BD890", Offset = "0x50BD890", VA = "0x50BD890")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000002")]
	public static event WillRenderCanvases willRenderCanvases
	{
		[Token(Token = "0x600005A")]
		[Address(RVA = "0x50BD930", Offset = "0x50BD930", VA = "0x50BD930")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600005B")]
		[Address(RVA = "0x50BD9F0", Offset = "0x50BD9F0", VA = "0x50BD9F0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000076")]
	[Address(RVA = "0x50BED70", Offset = "0x50BED70", VA = "0x50BED70")]
	[UnityEngine.Bindings.FreeFunction("UI::CanvasManager::SetExternalCanvasEnabled")]
	internal static extern void SetExternalCanvasEnabled(bool enabled);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000078")]
	[Address(RVA = "0x50BEE70", Offset = "0x50BEE70", VA = "0x50BEE70")]
	[UnityEngine.Bindings.FreeFunction("UI::GetDefaultUIMaterial")]
	public static extern Material GetDefaultCanvasMaterial();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000079")]
	[Address(RVA = "0x50BEEA0", Offset = "0x50BEEA0", VA = "0x50BEEA0")]
	[UnityEngine.Bindings.FreeFunction("UI::GetETC1SupportedCanvasMaterial")]
	public static extern Material GetETC1SupportedCanvasMaterial();

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x50BEED0", Offset = "0x50BEED0", VA = "0x50BEED0")]
	public static void ForceUpdateCanvases()
	{
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x50BEF60", Offset = "0x50BEF60", VA = "0x50BEF60")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void SendPreWillRenderCanvases()
	{
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x50BEFB0", Offset = "0x50BEFB0", VA = "0x50BEFB0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void SendWillRenderCanvases()
	{
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x50BF000", Offset = "0x50BF000", VA = "0x50BF000")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void BeginRenderExtraOverlays(int displayIndex)
	{
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x50BF050", Offset = "0x50BF050", VA = "0x50BF050")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void RenderExtraOverlaysBefore(int displayIndex, int sortingOrder)
	{
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x50BF0B0", Offset = "0x50BF0B0", VA = "0x50BF0B0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void EndRenderExtraOverlays(int displayIndex)
	{
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x50BF100", Offset = "0x50BF100", VA = "0x50BF100")]
	public Canvas()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000081")]
	[Address(RVA = "0x50BDB50", Offset = "0x50BDB50", VA = "0x50BDB50")]
	private static extern RenderMode get_renderMode_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000082")]
	[Address(RVA = "0x50BDC20", Offset = "0x50BDC20", VA = "0x50BDC20")]
	private static extern void set_renderMode_Injected(IntPtr _unity_self, RenderMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000083")]
	[Address(RVA = "0x50BDD00", Offset = "0x50BDD00", VA = "0x50BDD00")]
	private static extern bool get_isRootCanvas_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000084")]
	[Address(RVA = "0x50BDDD0", Offset = "0x50BDDD0", VA = "0x50BDDD0")]
	private static extern float get_scaleFactor_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000085")]
	[Address(RVA = "0x50BDEB0", Offset = "0x50BDEB0", VA = "0x50BDEB0")]
	private static extern void set_scaleFactor_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000086")]
	[Address(RVA = "0x50BDFA0", Offset = "0x50BDFA0", VA = "0x50BDFA0")]
	private static extern float get_referencePixelsPerUnit_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000087")]
	[Address(RVA = "0x50BE080", Offset = "0x50BE080", VA = "0x50BE080")]
	private static extern void set_referencePixelsPerUnit_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000088")]
	[Address(RVA = "0x50BE170", Offset = "0x50BE170", VA = "0x50BE170")]
	private static extern bool get_pixelPerfect_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000089")]
	[Address(RVA = "0x50BE240", Offset = "0x50BE240", VA = "0x50BE240")]
	private static extern int get_renderOrder_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008A")]
	[Address(RVA = "0x50BE310", Offset = "0x50BE310", VA = "0x50BE310")]
	private static extern bool get_overrideSorting_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008B")]
	[Address(RVA = "0x50BE3E0", Offset = "0x50BE3E0", VA = "0x50BE3E0")]
	private static extern void set_overrideSorting_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008C")]
	[Address(RVA = "0x50BE4C0", Offset = "0x50BE4C0", VA = "0x50BE4C0")]
	private static extern int get_sortingOrder_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008D")]
	[Address(RVA = "0x50BE590", Offset = "0x50BE590", VA = "0x50BE590")]
	private static extern void set_sortingOrder_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008E")]
	[Address(RVA = "0x50BE670", Offset = "0x50BE670", VA = "0x50BE670")]
	private static extern int get_targetDisplay_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008F")]
	[Address(RVA = "0x50BE740", Offset = "0x50BE740", VA = "0x50BE740")]
	private static extern int get_sortingLayerID_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000090")]
	[Address(RVA = "0x50BE810", Offset = "0x50BE810", VA = "0x50BE810")]
	private static extern void set_sortingLayerID_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000091")]
	[Address(RVA = "0x50BE8F0", Offset = "0x50BE8F0", VA = "0x50BE8F0")]
	private static extern AdditionalCanvasShaderChannels get_additionalShaderChannels_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000092")]
	[Address(RVA = "0x50BE9C0", Offset = "0x50BE9C0", VA = "0x50BE9C0")]
	private static extern void set_additionalShaderChannels_Injected(IntPtr _unity_self, AdditionalCanvasShaderChannels value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000093")]
	[Address(RVA = "0x50BEAA0", Offset = "0x50BEAA0", VA = "0x50BEAA0")]
	private static extern Canvas get_rootCanvas_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000094")]
	[Address(RVA = "0x50BEB80", Offset = "0x50BEB80", VA = "0x50BEB80")]
	private static extern void get_renderingDisplaySize_Injected(IntPtr _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000095")]
	[Address(RVA = "0x50BEE40", Offset = "0x50BEE40", VA = "0x50BEE40")]
	private static extern Camera get_worldCamera_Injected(IntPtr _unity_self);
}
