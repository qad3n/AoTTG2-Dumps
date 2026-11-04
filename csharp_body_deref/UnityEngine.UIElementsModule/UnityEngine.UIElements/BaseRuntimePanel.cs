// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BaseRuntimePanel
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x20002BE")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIToolkitAuthoringModule", "UnityEditor.VectorGraphicsModule" })]
internal abstract class BaseRuntimePanel : Panel
{
	[Token(Token = "0x4000A9E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1D8")]
	private GameObject m_SelectableGameObject;

	[Token(Token = "0x4000A9F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static int s_CurrentRuntimePanelCounter;

	[Token(Token = "0x4000AA0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1E0")]
	internal readonly int m_RuntimePanelCreationIndex;

	[Token(Token = "0x4000AA1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1E4")]
	private float m_SortingPriority;

	[Token(Token = "0x4000AA2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1E8")]
	internal int resolvedSortingIndex;

	[Token(Token = "0x4000AA3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1F0")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Action m_destroyed;

	[Token(Token = "0x4000AA4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1F8")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Action m_drawsInCamerasChanged;

	[Token(Token = "0x4000AA5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x200")]
	private bool m_DrawsInCameras;

	[Token(Token = "0x4000AA6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x204")]
	private float m_PixelsPerUnit;

	[Token(Token = "0x4000AA7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x208")]
	internal RenderTexture targetTexture;

	[Token(Token = "0x4000AA9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal static readonly Func<Vector2, Vector3> DefaultScreenToPanelSpace;

	[Token(Token = "0x4000AAA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x218")]
	private Func<Vector2, Vector3> m_ScreenToPanelSpace;

	[Token(Token = "0x170003CA")]
	public GameObject selectableGameObject
	{
		[Token(Token = "0x6001293")]
		[Address(RVA = "0x2D07840", Offset = "0x2D05E40", VA = "0x182D07840", Slot = "58")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001294")]
		[Address(RVA = "0x32A8BB0", Offset = "0x32A71B0", VA = "0x1832A8BB0", Slot = "59")]
		set
		{
		}
	}

	[Token(Token = "0x170003CB")]
	public float sortingPriority
	{
		[Token(Token = "0x6001295")]
		[Address(RVA = "0x32A8940", Offset = "0x32A6F40", VA = "0x1832A8940")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001296")]
		[Address(RVA = "0x32A8C50", Offset = "0x32A7250", VA = "0x1832A8C50")]
		set
		{
		}
	}

	[Token(Token = "0x170003CC")]
	internal bool drawsInCameras
	{
		[Token(Token = "0x600129E")]
		[Address(RVA = "0x32A8740", Offset = "0x32A6D40", VA = "0x1832A8740")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600129F")]
		[Address(RVA = "0x32A8A90", Offset = "0x32A7090", VA = "0x1832A8A90")]
		set
		{
		}
	}

	[Token(Token = "0x170003CD")]
	internal float pixelsPerUnit
	{
		[Token(Token = "0x60012A0")]
		[Address(RVA = "0x32A8750", Offset = "0x32A6D50", VA = "0x1832A8750")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60012A1")]
		[Address(RVA = "0x32A8B10", Offset = "0x32A7110", VA = "0x1832A8B10")]
		set
		{
		}
	}

	[Token(Token = "0x170003CE")]
	internal int targetDisplay
	{
		[Token(Token = "0x60012A2")]
		[Address(RVA = "0x30E5510", Offset = "0x30E3B10", VA = "0x1830E5510")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60012A3")]
		[Address(RVA = "0x32A8CE0", Offset = "0x32A72E0", VA = "0x1832A8CE0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170003CF")]
	internal int screenRenderingWidth
	{
		[Token(Token = "0x60012A4")]
		[Address(RVA = "0x32A8850", Offset = "0x32A6E50", VA = "0x1832A8850")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003D0")]
	internal int screenRenderingHeight
	{
		[Token(Token = "0x60012A5")]
		[Address(RVA = "0x32A8760", Offset = "0x32A6D60", VA = "0x1832A8760")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003D1")]
	public Func<Vector2, Vector3> screenToPanelSpace
	{
		[Token(Token = "0x60012AA")]
		[Address(RVA = "0x30E4E20", Offset = "0x30E3420", VA = "0x1830E4E20")]
		get
		{
			return null;
		}
		[Token(Token = "0x60012AB")]
		[Address(RVA = "0x32A8B20", Offset = "0x32A7120", VA = "0x1832A8B20")]
		set
		{
		}
	}

	[Token(Token = "0x1400002B")]
	public event Action destroyed
	{
		[Token(Token = "0x6001297")]
		[Address(RVA = "0x32A8480", Offset = "0x32A6A80", VA = "0x1832A8480")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6001298")]
		[Address(RVA = "0x32A8950", Offset = "0x32A6F50", VA = "0x1832A8950")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400002C")]
	internal event Action drawsInCamerasChanged
	{
		[Token(Token = "0x600129B")]
		[Address(RVA = "0x32A8520", Offset = "0x32A6B20", VA = "0x1832A8520")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600129C")]
		[Address(RVA = "0x32A89F0", Offset = "0x32A6FF0", VA = "0x1832A89F0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6001299")]
	[Address(RVA = "0x32A8390", Offset = "0x32A6990", VA = "0x1832A8390")]
	protected BaseRuntimePanel(ScriptableObject ownerObject, [Optional] EventDispatcher dispatcher)
	{
	}

	[Token(Token = "0x600129A")]
	[Address(RVA = "0x32A7810", Offset = "0x32A5E10", VA = "0x1832A7810", Slot = "24")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600129D")]
	[Address(RVA = "0x32A7860", Offset = "0x32A5E60", VA = "0x1832A7860")]
	private void InvokeDrawsInCamerasChanged()
	{
	}

	[Token(Token = "0x60012A6")]
	[Address(RVA = "0x32A8260", Offset = "0x32A6860", VA = "0x1832A8260", Slot = "60")]
	internal virtual void Update()
	{
	}

	[Token(Token = "0x60012A7")]
	[Address(RVA = "0x32A85C0", Offset = "0x32A6BC0", VA = "0x1832A85C0")]
	internal static int getScreenRenderingHeight(int display)
	{
		return default(int);
	}

	[Token(Token = "0x60012A8")]
	[Address(RVA = "0x32A8680", Offset = "0x32A6C80", VA = "0x1832A8680")]
	internal static int getScreenRenderingWidth(int display)
	{
		return default(int);
	}

	[Token(Token = "0x60012A9")]
	[Address(RVA = "0x32A7A80", Offset = "0x32A6080", VA = "0x1832A7A80", Slot = "57")]
	public override void Render()
	{
	}

	[Token(Token = "0x60012AC")]
	[Address(RVA = "0x32A81E0", Offset = "0x32A67E0", VA = "0x1832A81E0")]
	internal Vector3 ScreenToPanel(Vector2 screen)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60012AD")]
	[Address(RVA = "0x32A7EE0", Offset = "0x32A64E0", VA = "0x1832A7EE0")]
	internal bool ScreenToPanel(Vector2 screenPosition, Vector2 screenDelta, out Vector3 panelPosition, bool allowOutside = false)
	{
		return default(bool);
	}

	[Token(Token = "0x60012AE")]
	[Address(RVA = "0x32A7540", Offset = "0x32A5B40", VA = "0x1832A7540")]
	private void AssignPanelToComponents(BaseRuntimePanel panel)
	{
	}

	[Token(Token = "0x60012AF")]
	[Address(RVA = "0x32A7910", Offset = "0x32A5F10", VA = "0x1832A7910")]
	internal void PointerLeavesPanel(int pointerId)
	{
	}

	[Token(Token = "0x60012B0")]
	[Address(RVA = "0x32A7880", Offset = "0x32A5E80", VA = "0x1832A7880")]
	internal void PointerEntersPanel(int pointerId, Vector3 position)
	{
	}
}
