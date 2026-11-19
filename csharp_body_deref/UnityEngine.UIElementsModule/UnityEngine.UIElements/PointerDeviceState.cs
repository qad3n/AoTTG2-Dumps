// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.PointerDeviceState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000217")]
internal static class PointerDeviceState
{
	[Token(Token = "0x2000218")]
	[Flags]
	internal enum LocationFlag
	{
		[Token(Token = "0x400080E")]
		None = 0,
		[Token(Token = "0x400080F")]
		OutsidePanel = 1
	}

	[Token(Token = "0x2000219")]
	private struct PointerLocation
	{
		[Token(Token = "0x1700029F")]
		internal Vector3 Position
		{
			[Token(Token = "0x6000E1D")]
			[Address(RVA = "0x6C6DF80", Offset = "0x6C6CF80", VA = "0x6C6DF80")]
			[CompilerGenerated]
			readonly get
			{
				return default(Vector3);
			}
			[Token(Token = "0x6000E1E")]
			[Address(RVA = "0x6C6DF90", Offset = "0x6C6CF90", VA = "0x6C6DF90")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x170002A0")]
		internal IPanel Panel
		{
			[Token(Token = "0x6000E1F")]
			[Address(RVA = "0x6C6DFA0", Offset = "0x6C6CFA0", VA = "0x6C6DFA0")]
			[CompilerGenerated]
			readonly get
			{
				return null;
			}
			[Token(Token = "0x6000E20")]
			[Address(RVA = "0x6C6DFB0", Offset = "0x6C6CFB0", VA = "0x6C6DFB0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x170002A1")]
		internal LocationFlag Flags
		{
			[Token(Token = "0x6000E21")]
			[Address(RVA = "0x6C6DFC0", Offset = "0x6C6CFC0", VA = "0x6C6DFC0")]
			[CompilerGenerated]
			readonly get
			{
				return default(LocationFlag);
			}
			[Token(Token = "0x6000E22")]
			[Address(RVA = "0x6C6DFD0", Offset = "0x6C6CFD0", VA = "0x6C6DFD0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x6000E23")]
		[Address(RVA = "0x6C6C900", Offset = "0x6C6B900", VA = "0x6C6C900")]
		internal void SetLocation(Vector3 position, IPanel panel)
		{
		}
	}

	[Token(Token = "0x200021A")]
	public class RuntimePointerState
	{
		[Token(Token = "0x200021B")]
		public struct RaycastHit
		{
			[Token(Token = "0x4000815")]
			[FieldOffset(Offset = "0x0")]
			public float distance;

			[Token(Token = "0x4000816")]
			[FieldOffset(Offset = "0x8")]
			public Collider collider;

			[Token(Token = "0x4000817")]
			[FieldOffset(Offset = "0x10")]
			public UIDocument document;

			[Token(Token = "0x4000818")]
			[FieldOffset(Offset = "0x18")]
			public VisualElement element;
		}

		[Token(Token = "0x4000813")]
		[FieldOffset(Offset = "0x10")]
		public RaycastHit hit;

		[Token(Token = "0x4000814")]
		[FieldOffset(Offset = "0x30")]
		public int updateFrameCount;

		[Token(Token = "0x6000E24")]
		[Address(RVA = "0x6C6DFE0", Offset = "0x6C6CFE0", VA = "0x6C6DFE0", Slot = "4")]
		public virtual void Reset()
		{
		}

		[Token(Token = "0x6000E25")]
		[Address(RVA = "0x6C6E000", Offset = "0x6C6D000", VA = "0x6C6E000")]
		public RuntimePointerState()
		{
		}
	}

	[Token(Token = "0x200021C")]
	public class ScreenPointerState : RuntimePointerState
	{
		[Token(Token = "0x4000819")]
		[FieldOffset(Offset = "0x34")]
		public Vector2 mousePosition;

		[Token(Token = "0x400081A")]
		[FieldOffset(Offset = "0x3C")]
		public int? targetDisplay;

		[Token(Token = "0x6000E26")]
		[Address(RVA = "0x6C6E010", Offset = "0x6C6D010", VA = "0x6C6E010", Slot = "4")]
		public override void Reset()
		{
		}

		[Token(Token = "0x6000E27")]
		[Address(RVA = "0x6C6DD90", Offset = "0x6C6CD90", VA = "0x6C6DD90")]
		public ScreenPointerState()
		{
		}
	}

	[Token(Token = "0x200021D")]
	public class TrackedPointerState : RuntimePointerState
	{
		[Token(Token = "0x400081B")]
		[FieldOffset(Offset = "0x34")]
		public Vector3 worldPosition;

		[Token(Token = "0x400081C")]
		[FieldOffset(Offset = "0x40")]
		public Quaternion worldOrientation;

		[Token(Token = "0x400081D")]
		[FieldOffset(Offset = "0x50")]
		public float maxDistance;

		[Token(Token = "0x170002A2")]
		public Ray worldRay
		{
			[Token(Token = "0x6000E28")]
			[Address(RVA = "0x6C6E070", Offset = "0x6C6D070", VA = "0x6C6E070")]
			get
			{
				return default(Ray);
			}
		}

		[Token(Token = "0x6000E29")]
		[Address(RVA = "0x6C6E1F0", Offset = "0x6C6D1F0", VA = "0x6C6E1F0", Slot = "4")]
		public override void Reset()
		{
		}

		[Token(Token = "0x6000E2A")]
		[Address(RVA = "0x6C6D9D0", Offset = "0x6C6C9D0", VA = "0x6C6D9D0")]
		public TrackedPointerState()
		{
		}
	}

	[Token(Token = "0x4000807")]
	[FieldOffset(Offset = "0x0")]
	private static RuntimePointerState[] s_RuntimePointerStates;

	[Token(Token = "0x4000808")]
	[FieldOffset(Offset = "0x8")]
	private static PointerLocation[] s_PlayerPointerLocations;

	[Token(Token = "0x4000809")]
	[FieldOffset(Offset = "0x10")]
	private static int[] s_PressedButtons;

	[Token(Token = "0x400080A")]
	[FieldOffset(Offset = "0x18")]
	private static readonly RuntimePanel[] s_PlayerPanelWithSoftPointerCapture;

	[Token(Token = "0x400080B")]
	[FieldOffset(Offset = "0x20")]
	private static readonly UIDocument[] s_WorldSpaceDocumentWithSoftPointerCapture;

	[Token(Token = "0x400080C")]
	[FieldOffset(Offset = "0x28")]
	private static readonly Camera[] s_CameraWithSoftPointerCapture;

	[Token(Token = "0x6000E08")]
	[Address(RVA = "0x6C6C5D0", Offset = "0x6C6B5D0", VA = "0x6C6C5D0")]
	internal static void RemovePanelData(IPanel panel)
	{
	}

	[Token(Token = "0x6000E09")]
	[Address(RVA = "0x6C6CB20", Offset = "0x6C6BB20", VA = "0x6C6CB20")]
	internal static void RemoveDocumentData(UIDocument document)
	{
	}

	[Token(Token = "0x6000E0A")]
	[Address(RVA = "0x6C6CCA0", Offset = "0x6C6BCA0", VA = "0x6C6CCA0")]
	public static void SavePointerPosition(int pointerId, Vector3 position, IPanel panel, ContextType contextType)
	{
	}

	[Token(Token = "0x6000E0B")]
	[Address(RVA = "0x6C6CD80", Offset = "0x6C6BD80", VA = "0x6C6CD80")]
	public static void PressButton(int pointerId, int buttonId)
	{
	}

	[Token(Token = "0x6000E0C")]
	[Address(RVA = "0x6C6CE70", Offset = "0x6C6BE70", VA = "0x6C6CE70")]
	public static void ReleaseButton(int pointerId, int buttonId)
	{
	}

	[Token(Token = "0x6000E0D")]
	[Address(RVA = "0x6C6A630", Offset = "0x6C69630", VA = "0x6C6A630")]
	public static void ReleaseAllButtons(int pointerId)
	{
	}

	[Token(Token = "0x6000E0E")]
	[Address(RVA = "0x6C60390", Offset = "0x6C5F390", VA = "0x6C60390")]
	public static Vector3 GetPointerPosition(int pointerId, ContextType contextType)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000E0F")]
	[Address(RVA = "0x6C6CF60", Offset = "0x6C6BF60", VA = "0x6C6CF60")]
	public static Vector3 GetPointerDeltaPosition(int pointerId, ContextType contextType, Vector3 newPosition)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000E10")]
	[Address(RVA = "0x6C6D0B0", Offset = "0x6C6C0B0", VA = "0x6C6D0B0")]
	public static IPanel GetPanel(int pointerId, ContextType contextType)
	{
		return null;
	}

	[Token(Token = "0x6000E11")]
	[Address(RVA = "0x6C6D150", Offset = "0x6C6C150", VA = "0x6C6D150")]
	private static bool HasFlagFast(LocationFlag flagSet, LocationFlag flag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E12")]
	[Address(RVA = "0x6C6D160", Offset = "0x6C6C160", VA = "0x6C6D160")]
	public static bool HasLocationFlag(int pointerId, ContextType contextType, LocationFlag flag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E13")]
	[Address(RVA = "0x6C6D200", Offset = "0x6C6C200", VA = "0x6C6D200")]
	public static int GetPressedButtons(int pointerId)
	{
		return default(int);
	}

	[Token(Token = "0x6000E14")]
	[Address(RVA = "0x6C6D290", Offset = "0x6C6C290", VA = "0x6C6D290")]
	internal static bool HasAdditionalPressedButtons(int pointerId, int exceptButtonId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E15")]
	[Address(RVA = "0x6C6D330", Offset = "0x6C6C330", VA = "0x6C6D330")]
	internal static RuntimePanel GetPlayerPanelWithSoftPointerCapture(int pointerId)
	{
		return null;
	}

	[Token(Token = "0x6000E16")]
	[Address(RVA = "0x6C6D3C0", Offset = "0x6C6C3C0", VA = "0x6C6D3C0")]
	internal static UIDocument GetWorldSpaceDocumentWithSoftPointerCapture(int pointerId)
	{
		return null;
	}

	[Token(Token = "0x6000E17")]
	[Address(RVA = "0x6C6D450", Offset = "0x6C6C450", VA = "0x6C6D450")]
	internal static Camera GetCameraWithSoftPointerCapture(int pointerId)
	{
		return null;
	}

	[Token(Token = "0x6000E18")]
	[Address(RVA = "0x6C6D4E0", Offset = "0x6C6C4E0", VA = "0x6C6D4E0")]
	internal static void SetElementWithSoftPointerCapture(int pointerId, VisualElement element, Camera camera)
	{
	}

	[Token(Token = "0x6000E19")]
	[Address(RVA = "0x6C6D740", Offset = "0x6C6C740", VA = "0x6C6D740")]
	internal static TrackedPointerState GetTrackedState(int pointerId, bool createIfNull = false)
	{
		return null;
	}

	[Token(Token = "0x6000E1A")]
	[Address(RVA = "0x6C6DA70", Offset = "0x6C6CA70", VA = "0x6C6DA70")]
	internal static void RemoveTrackedState(int pointerId)
	{
	}

	[Token(Token = "0x6000E1B")]
	[Address(RVA = "0x6C6DB70", Offset = "0x6C6CB70", VA = "0x6C6DB70")]
	internal static ScreenPointerState GetScreenPointerState(int pointerId, bool createIfNull = false)
	{
		return null;
	}
}
