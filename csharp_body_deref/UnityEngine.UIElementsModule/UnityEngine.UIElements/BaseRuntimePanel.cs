using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000242")]
internal abstract class BaseRuntimePanel : Panel
{
	[Token(Token = "0x4000856")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x190")]
	private GameObject m_SelectableGameObject;

	[Token(Token = "0x4000857")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static int s_CurrentRuntimePanelCounter;

	[Token(Token = "0x4000858")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x198")]
	internal readonly int m_RuntimePanelCreationIndex;

	[Token(Token = "0x4000859")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x19C")]
	private float m_SortingPriority;

	[Token(Token = "0x400085A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A0")]
	internal int resolvedSortingIndex;

	[Token(Token = "0x400085C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B0")]
	private Shader m_StandardWorldSpaceShader;

	[Token(Token = "0x400085D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B8")]
	private bool m_DrawToCameras;

	[Token(Token = "0x400085E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C0")]
	internal RenderTexture targetTexture;

	[Token(Token = "0x400085F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C8")]
	internal Matrix4x4 panelToWorld;

	[Token(Token = "0x4000861")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal static readonly Func<Vector2, Vector2> DefaultScreenToPanelSpace;

	[Token(Token = "0x4000862")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x210")]
	private Func<Vector2, Vector2> m_ScreenToPanelSpace;

	[Token(Token = "0x170002DF")]
	public GameObject selectableGameObject
	{
		[Token(Token = "0x6000EDD")]
		[Address(RVA = "0x4D29860", Offset = "0x4D29860", VA = "0x4D29860", Slot = "54")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EDE")]
		[Address(RVA = "0x4D29870", Offset = "0x4D29870", VA = "0x4D29870", Slot = "55")]
		set
		{
		}
	}

	[Token(Token = "0x170002E0")]
	public float sortingPriority
	{
		[Token(Token = "0x6000EDF")]
		[Address(RVA = "0x4D29CE0", Offset = "0x4D29CE0", VA = "0x4D29CE0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000EE0")]
		[Address(RVA = "0x4D1CEC0", Offset = "0x4D1CEC0", VA = "0x4D1CEC0")]
		set
		{
		}
	}

	[Token(Token = "0x170002E1")]
	internal override Shader standardWorldSpaceShader
	{
		[Token(Token = "0x6000EE5")]
		[Address(RVA = "0x4D29EB0", Offset = "0x4D29EB0", VA = "0x4D29EB0", Slot = "50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002E2")]
	internal bool drawToCameras
	{
		[Token(Token = "0x6000EE6")]
		[Address(RVA = "0x4D29EC0", Offset = "0x4D29EC0", VA = "0x4D29EC0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EE7")]
		[Address(RVA = "0x4D1C2B0", Offset = "0x4D1C2B0", VA = "0x4D1C2B0")]
		set
		{
		}
	}

	[Token(Token = "0x170002E3")]
	internal int targetDisplay
	{
		[Token(Token = "0x6000EE8")]
		[Address(RVA = "0x4D29ED0", Offset = "0x4D29ED0", VA = "0x4D29ED0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000EE9")]
		[Address(RVA = "0x4D29EE0", Offset = "0x4D29EE0", VA = "0x4D29EE0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002E4")]
	internal int screenRenderingWidth
	{
		[Token(Token = "0x6000EEA")]
		[Address(RVA = "0x4D29EF0", Offset = "0x4D29EF0", VA = "0x4D29EF0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002E5")]
	internal int screenRenderingHeight
	{
		[Token(Token = "0x6000EEB")]
		[Address(RVA = "0x4D29F40", Offset = "0x4D29F40", VA = "0x4D29F40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002E6")]
	public Func<Vector2, Vector2> screenToPanelSpace
	{
		[Token(Token = "0x6000EEF")]
		[Address(RVA = "0x4D2A1F0", Offset = "0x4D2A1F0", VA = "0x4D2A1F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EF0")]
		[Address(RVA = "0x4D1C490", Offset = "0x4D1C490", VA = "0x4D1C490")]
		set
		{
		}
	}

	[Token(Token = "0x14000021")]
	public event Action destroyed
	{
		[Token(Token = "0x6000EE1")]
		[Address(RVA = "0x4D29CF0", Offset = "0x4D29CF0", VA = "0x4D29CF0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000EE2")]
		[Address(RVA = "0x4D29D90", Offset = "0x4D29D90", VA = "0x4D29D90")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000EE3")]
	[Address(RVA = "0x4D1D360", Offset = "0x4D1D360", VA = "0x4D1D360")]
	protected BaseRuntimePanel(ScriptableObject ownerObject, [Optional] EventDispatcher dispatcher)
	{
	}

	[Token(Token = "0x6000EE4")]
	[Address(RVA = "0x4D29E30", Offset = "0x4D29E30", VA = "0x4D29E30", Slot = "23")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000EEC")]
	[Address(RVA = "0x4D1C5E0", Offset = "0x4D1C5E0", VA = "0x4D1C5E0")]
	internal static int getScreenRenderingHeight(int display)
	{
		return default(int);
	}

	[Token(Token = "0x6000EED")]
	[Address(RVA = "0x4D1C530", Offset = "0x4D1C530", VA = "0x4D1C530")]
	internal static int getScreenRenderingWidth(int display)
	{
		return default(int);
	}

	[Token(Token = "0x6000EEE")]
	[Address(RVA = "0x4D29F90", Offset = "0x4D29F90", VA = "0x4D29F90", Slot = "24")]
	public override void Repaint(Event e)
	{
	}

	[Token(Token = "0x6000EF1")]
	[Address(RVA = "0x4D2A200", Offset = "0x4D2A200", VA = "0x4D2A200")]
	internal Vector2 ScreenToPanel(Vector2 screen)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000EF2")]
	[Address(RVA = "0x4D2A230", Offset = "0x4D2A230", VA = "0x4D2A230")]
	internal bool ScreenToPanel(Vector2 screenPosition, Vector2 screenDelta, out Vector2 panelPosition, out Vector2 panelDelta, bool allowOutside = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EF3")]
	[Address(RVA = "0x4D29900", Offset = "0x4D29900", VA = "0x4D29900")]
	private void AssignPanelToComponents(BaseRuntimePanel panel)
	{
	}

	[Token(Token = "0x6000EF4")]
	[Address(RVA = "0x4D2A3E0", Offset = "0x4D2A3E0", VA = "0x4D2A3E0")]
	internal void PointerLeavesPanel(int pointerId, Vector2 position)
	{
	}

	[Token(Token = "0x6000EF5")]
	[Address(RVA = "0x4D2A4D0", Offset = "0x4D2A4D0", VA = "0x4D2A4D0")]
	internal void PointerEntersPanel(int pointerId, Vector2 position)
	{
	}
}
