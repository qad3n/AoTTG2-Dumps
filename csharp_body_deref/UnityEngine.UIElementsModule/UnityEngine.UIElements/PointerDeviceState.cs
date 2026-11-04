// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.PointerDeviceState
// Update status: CHANGED in this game update
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
			[Address(RVA = "0x180F7A0", Offset = "0x180DDA0", VA = "0x18180F7A0")]
			[CompilerGenerated]
			readonly get
			{
				return default(Vector3);
			}
			[Token(Token = "0x6000E1E")]
			[Address(RVA = "0x2B889E0", Offset = "0x2B86FE0", VA = "0x182B889E0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x170002A0")]
		internal IPanel Panel
		{
			[Token(Token = "0x6000E1F")]
			[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
			[CompilerGenerated]
			readonly get
			{
				return null;
			}
			[Token(Token = "0x6000E20")]
			[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x170002A1")]
		internal LocationFlag Flags
		{
			[Token(Token = "0x6000E21")]
			[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
			[CompilerGenerated]
			readonly get
			{
				return default(LocationFlag);
			}
			[Token(Token = "0x6000E22")]
			[Address(RVA = "0x111C9C0", Offset = "0x111AFC0", VA = "0x18111C9C0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x6000E23")]
		[Address(RVA = "0x326C920", Offset = "0x326AF20", VA = "0x18326C920")]
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
		[Address(RVA = "0x326E1C0", Offset = "0x326C7C0", VA = "0x18326E1C0", Slot = "4")]
		public virtual void Reset()
		{
		}

		[Token(Token = "0x6000E25")]
		[Address(RVA = "0x326E1E0", Offset = "0x326C7E0", VA = "0x18326E1E0")]
		public RuntimePointerState()
		{
		}
	}

	[Token(Token = "0x200021C")]
	public class ScreenPointerState : RuntimePointerState
	{
		[Token(Token = "0x4000819")]
		[FieldOffset(Offset = "0x38")]
		public Vector2 mousePosition;

		[Token(Token = "0x400081A")]
		[FieldOffset(Offset = "0x40")]
		public int? targetDisplay;

		[Token(Token = "0x6000E26")]
		[Address(RVA = "0x326E1F0", Offset = "0x326C7F0", VA = "0x18326E1F0", Slot = "4")]
		public override void Reset()
		{
		}

		[Token(Token = "0x6000E27")]
		[Address(RVA = "0x326E1E0", Offset = "0x326C7E0", VA = "0x18326E1E0")]
		public ScreenPointerState()
		{
		}
	}

	[Token(Token = "0x200021D")]
	public class TrackedPointerState : RuntimePointerState
	{
		[Token(Token = "0x400081B")]
		[FieldOffset(Offset = "0x38")]
		public Vector3 worldPosition;

		[Token(Token = "0x400081C")]
		[FieldOffset(Offset = "0x44")]
		public Quaternion worldOrientation;

		[Token(Token = "0x400081D")]
		[FieldOffset(Offset = "0x54")]
		public float maxDistance;

		[Token(Token = "0x170002A2")]
		public Ray worldRay
		{
			[Token(Token = "0x6000E28")]
			[Address(RVA = "0x326E7C0", Offset = "0x326CDC0", VA = "0x18326E7C0")]
			get
			{
				return default(Ray);
			}
		}

		[Token(Token = "0x6000E29")]
		[Address(RVA = "0x326E690", Offset = "0x326CC90", VA = "0x18326E690", Slot = "4")]
		public override void Reset()
		{
		}

		[Token(Token = "0x6000E2A")]
		[Address(RVA = "0x326E730", Offset = "0x326CD30", VA = "0x18326E730")]
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
	[Address(RVA = "0x326B130", Offset = "0x3269730", VA = "0x18326B130")]
	internal static void RemovePanelData(IPanel panel)
	{
	}

	[Token(Token = "0x6000E09")]
	[Address(RVA = "0x326AF80", Offset = "0x3269580", VA = "0x18326AF80")]
	internal static void RemoveDocumentData(UIDocument document)
	{
	}

	[Token(Token = "0x6000E0A")]
	[Address(RVA = "0x326B560", Offset = "0x3269B60", VA = "0x18326B560")]
	public static void SavePointerPosition(int pointerId, Vector3 position, IPanel panel, ContextType contextType)
	{
	}

	[Token(Token = "0x6000E0B")]
	[Address(RVA = "0x326AD20", Offset = "0x3269320", VA = "0x18326AD20")]
	public static void PressButton(int pointerId, int buttonId)
	{
	}

	[Token(Token = "0x6000E0C")]
	[Address(RVA = "0x326AE90", Offset = "0x3269490", VA = "0x18326AE90")]
	public static void ReleaseButton(int pointerId, int buttonId)
	{
	}

	[Token(Token = "0x6000E0D")]
	[Address(RVA = "0x326AE10", Offset = "0x3269410", VA = "0x18326AE10")]
	public static void ReleaseAllButtons(int pointerId)
	{
	}

	[Token(Token = "0x6000E0E")]
	[Address(RVA = "0x326A630", Offset = "0x3268C30", VA = "0x18326A630")]
	public static Vector3 GetPointerPosition(int pointerId, ContextType contextType)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000E0F")]
	[Address(RVA = "0x326A4E0", Offset = "0x3268AE0", VA = "0x18326A4E0")]
	public static Vector3 GetPointerDeltaPosition(int pointerId, ContextType contextType, Vector3 newPosition)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000E10")]
	[Address(RVA = "0x326A3F0", Offset = "0x32689F0", VA = "0x18326A3F0")]
	public static IPanel GetPanel(int pointerId, ContextType contextType)
	{
		return null;
	}

	[Token(Token = "0x6000E11")]
	[Address(RVA = "0x326AC80", Offset = "0x3269280", VA = "0x18326AC80")]
	private static bool HasFlagFast(LocationFlag flagSet, LocationFlag flag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E12")]
	[Address(RVA = "0x326AC90", Offset = "0x3269290", VA = "0x18326AC90")]
	public static bool HasLocationFlag(int pointerId, ContextType contextType, LocationFlag flag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E13")]
	[Address(RVA = "0x326A6D0", Offset = "0x3268CD0", VA = "0x18326A6D0")]
	public static int GetPressedButtons(int pointerId)
	{
		return default(int);
	}

	[Token(Token = "0x6000E14")]
	[Address(RVA = "0x326ABF0", Offset = "0x32691F0", VA = "0x18326ABF0")]
	internal static bool HasAdditionalPressedButtons(int pointerId, int exceptButtonId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E15")]
	[Address(RVA = "0x326A470", Offset = "0x3268A70", VA = "0x18326A470")]
	internal static RuntimePanel GetPlayerPanelWithSoftPointerCapture(int pointerId)
	{
		return null;
	}

	[Token(Token = "0x6000E16")]
	[Address(RVA = "0x326AB80", Offset = "0x3269180", VA = "0x18326AB80")]
	internal static UIDocument GetWorldSpaceDocumentWithSoftPointerCapture(int pointerId)
	{
		return null;
	}

	[Token(Token = "0x6000E17")]
	[Address(RVA = "0x326A380", Offset = "0x3268980", VA = "0x18326A380")]
	internal static Camera GetCameraWithSoftPointerCapture(int pointerId)
	{
		return null;
	}

	[Token(Token = "0x6000E18")]
	[Address(RVA = "0x326B620", Offset = "0x3269C20", VA = "0x18326B620")]
	internal static void SetElementWithSoftPointerCapture(int pointerId, VisualElement element, Camera camera)
	{
	}

	[Token(Token = "0x6000E19")]
	[Address(RVA = "0x326A920", Offset = "0x3268F20", VA = "0x18326A920")]
	internal static TrackedPointerState GetTrackedState(int pointerId, bool createIfNull = false)
	{
		return null;
	}

	[Token(Token = "0x6000E1A")]
	[Address(RVA = "0x326B470", Offset = "0x3269A70", VA = "0x18326B470")]
	internal static void RemoveTrackedState(int pointerId)
	{
	}

	[Token(Token = "0x6000E1B")]
	[Address(RVA = "0x326A740", Offset = "0x3268D40", VA = "0x18326A740")]
	internal static ScreenPointerState GetScreenPointerState(int pointerId, bool createIfNull = false)
	{
		return null;
	}
}
