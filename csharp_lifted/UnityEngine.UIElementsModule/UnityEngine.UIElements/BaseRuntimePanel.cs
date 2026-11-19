// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BaseRuntimePanel
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6CB82A0", Offset = "0x6CB72A0", VA = "0x6CB82A0", Slot = "58")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001294")]
		[Address(RVA = "0x6CB82B0", Offset = "0x6CB72B0", VA = "0x6CB82B0", Slot = "59")]
		set
		{
		}
	}

	[Token(Token = "0x170003CB")]
	public float sortingPriority
	{
		[Token(Token = "0x6001295")]
		[Address(RVA = "0x6CB86A0", Offset = "0x6CB76A0", VA = "0x6CB86A0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001296")]
		[Address(RVA = "0x6CB86B0", Offset = "0x6CB76B0", VA = "0x6CB86B0")]
		set
		{
		}
	}

	[Token(Token = "0x170003CC")]
	internal bool drawsInCameras
	{
		[Token(Token = "0x600129E")]
		[Address(RVA = "0x6CB8BA0", Offset = "0x6CB7BA0", VA = "0x6CB8BA0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600129F")]
		[Address(RVA = "0x6CB8BB0", Offset = "0x6CB7BB0", VA = "0x6CB8BB0")]
		set
		{
		}
	}

	[Token(Token = "0x170003CD")]
	internal float pixelsPerUnit
	{
		[Token(Token = "0x60012A0")]
		[Address(RVA = "0x6CB8C40", Offset = "0x6CB7C40", VA = "0x6CB8C40")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60012A1")]
		[Address(RVA = "0x6CB8C50", Offset = "0x6CB7C50", VA = "0x6CB8C50")]
		set
		{
		}
	}

	[Token(Token = "0x170003CE")]
	internal int targetDisplay
	{
		[Token(Token = "0x60012A2")]
		[Address(RVA = "0x6CB8C60", Offset = "0x6CB7C60", VA = "0x6CB8C60")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60012A3")]
		[Address(RVA = "0x6CB8C70", Offset = "0x6CB7C70", VA = "0x6CB8C70")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170003CF")]
	internal int screenRenderingWidth
	{
		[Token(Token = "0x60012A4")]
		[Address(RVA = "0x6CB8C80", Offset = "0x6CB7C80", VA = "0x6CB8C80")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003D0")]
	internal int screenRenderingHeight
	{
		[Token(Token = "0x60012A5")]
		[Address(RVA = "0x6CB8D80", Offset = "0x6CB7D80", VA = "0x6CB8D80")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003D1")]
	public Func<Vector2, Vector3> screenToPanelSpace
	{
		[Token(Token = "0x60012AA")]
		[Address(RVA = "0x6CB91A0", Offset = "0x6CB81A0", VA = "0x6CB91A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60012AB")]
		[Address(RVA = "0x6CB91B0", Offset = "0x6CB81B0", VA = "0x6CB91B0")]
		set
		{
		}
	}

	[Token(Token = "0x1400002B")]
	public event Action destroyed
	{
		[Token(Token = "0x6001297")]
		[Address(RVA = "0x6CB87C0", Offset = "0x6CB77C0", VA = "0x6CB87C0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6001298")]
		[Address(RVA = "0x6CB8860", Offset = "0x6CB7860", VA = "0x6CB8860")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400002C")]
	internal event Action drawsInCamerasChanged
	{
		[Token(Token = "0x600129B")]
		[Address(RVA = "0x6CB8A40", Offset = "0x6CB7A40", VA = "0x6CB8A40")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600129C")]
		[Address(RVA = "0x6CB8AE0", Offset = "0x6CB7AE0", VA = "0x6CB8AE0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6001299")]
	[Address(RVA = "0x6CB8900", Offset = "0x6CB7900", VA = "0x6CB8900")]
	protected BaseRuntimePanel(ScriptableObject ownerObject, [Optional] EventDispatcher dispatcher)
	{
	}

	[Token(Token = "0x600129A")]
	[Address(RVA = "0x6CB89F0", Offset = "0x6CB79F0", VA = "0x6CB89F0", Slot = "24")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600129D")]
	[Address(RVA = "0x6CB8B80", Offset = "0x6CB7B80", VA = "0x6CB8B80")]
	private void InvokeDrawsInCamerasChanged()
	{
	}

	[Token(Token = "0x60012A6")]
	[Address(RVA = "0x6CB8E80", Offset = "0x6CB7E80", VA = "0x6CB8E80", Slot = "60")]
	internal virtual void Update()
	{
	}

	[Token(Token = "0x60012A7")]
	[Address(RVA = "0x6CB8DD0", Offset = "0x6CB7DD0", VA = "0x6CB8DD0")]
	internal static int getScreenRenderingHeight(int display)
	{
		return default(int);
	}

	[Token(Token = "0x60012A8")]
	[Address(RVA = "0x6CB8CD0", Offset = "0x6CB7CD0", VA = "0x6CB8CD0")]
	internal static int getScreenRenderingWidth(int display)
	{
		return default(int);
	}

	[Token(Token = "0x60012A9")]
	[Address(RVA = "0x6CB8EB0", Offset = "0x6CB7EB0", VA = "0x6CB8EB0", Slot = "57")]
	public override void Render()
	{
	}

	[Token(Token = "0x60012AC")]
	[Address(RVA = "0x6CB9240", Offset = "0x6CB8240", VA = "0x6CB9240")]
	internal Vector3 ScreenToPanel(Vector2 screen)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60012AD")]
	[Address(RVA = "0x6CB9280", Offset = "0x6CB8280", VA = "0x6CB9280")]
	internal bool ScreenToPanel(Vector2 screenPosition, Vector2 screenDelta, out Vector3 panelPosition, bool allowOutside = false)
	{
		return default(bool);
	}

	[Token(Token = "0x60012AE")]
	[Address(RVA = "0x6CB8340", Offset = "0x6CB7340", VA = "0x6CB8340")]
	private void AssignPanelToComponents(BaseRuntimePanel panel)
	{
	}

	[Token(Token = "0x60012AF")]
	[Address(RVA = "0x6CB9550", Offset = "0x6CB8550", VA = "0x6CB9550")]
	internal void PointerLeavesPanel(int pointerId)
	{
	}

	[Token(Token = "0x60012B0")]
	[Address(RVA = "0x6CB9670", Offset = "0x6CB8670", VA = "0x6CB9670")]
	internal void PointerEntersPanel(int pointerId, Vector3 position)
	{
	}
}
