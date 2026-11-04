// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.InputForUI.PointerEvent
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IntegerTime;
using UnityEngine.Bindings;

namespace UnityEngine.InputForUI;

[Token(Token = "0x2000018")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
internal struct PointerEvent : IEventProperties
{
	[Token(Token = "0x2000019")]
	public enum Type
	{
		[Token(Token = "0x400008E")]
		PointerMoved = 1,
		[Token(Token = "0x400008F")]
		Scroll = 2,
		[Token(Token = "0x4000090")]
		ButtonPressed = 3,
		[Token(Token = "0x4000091")]
		ButtonReleased = 4,
		[Token(Token = "0x4000092")]
		State = 5,
		[Token(Token = "0x4000093")]
		TouchCanceled = 6,
		[Token(Token = "0x4000094")]
		TrackedCanceled = TouchCanceled
	}

	[Token(Token = "0x200001A")]
	[Flags]
	public enum Button : uint
	{
		[Token(Token = "0x4000096")]
		None = 0u,
		[Token(Token = "0x4000097")]
		Primary = 1u,
		[Token(Token = "0x4000098")]
		FingerInTouch = Primary,
		[Token(Token = "0x4000099")]
		PenTipInTouch = Primary,
		[Token(Token = "0x400009A")]
		PenEraserInTouch = 2u,
		[Token(Token = "0x400009B")]
		PenBarrelButton = 4u,
		[Token(Token = "0x400009C")]
		MouseLeft = Primary,
		[Token(Token = "0x400009D")]
		MouseRight = PenEraserInTouch,
		[Token(Token = "0x400009E")]
		MouseMiddle = PenBarrelButton,
		[Token(Token = "0x400009F")]
		MouseForward = 8u,
		[Token(Token = "0x40000A0")]
		MouseBack = 0x10u
	}

	[Token(Token = "0x200001B")]
	public struct ButtonsState
	{
		[Token(Token = "0x40000A1")]
		[FieldOffset(Offset = "0x0")]
		private uint _state;

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000063")]
		[Address(RVA = "0x28CBD50", Offset = "0x28CA350", VA = "0x1828CBD50")]
		public void Set(Button button, bool pressed)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000064")]
		[Address(RVA = "0x2FB9D20", Offset = "0x2FB8320", VA = "0x182FB9D20")]
		public bool Get(Button button)
		{
			return default(bool);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000065")]
		[Address(RVA = "0xB47950", Offset = "0xB45F50", VA = "0x180B47950")]
		public void Reset()
		{
		}

		[Token(Token = "0x6000066")]
		[Address(RVA = "0x2FB9E40", Offset = "0x2FB8440", VA = "0x182FB9E40", Slot = "3")]
		public override string ToString()
		{
			return null;
		}
	}

	[Token(Token = "0x4000079")]
	[FieldOffset(Offset = "0x0")]
	public Type type;

	[Token(Token = "0x400007A")]
	[FieldOffset(Offset = "0x4")]
	public int pointerIndex;

	[Token(Token = "0x400007B")]
	[FieldOffset(Offset = "0x8")]
	public Vector2 position;

	[Token(Token = "0x400007C")]
	[FieldOffset(Offset = "0x10")]
	public Vector2 deltaPosition;

	[Token(Token = "0x400007D")]
	[FieldOffset(Offset = "0x18")]
	public Vector3 worldPosition;

	[Token(Token = "0x400007E")]
	[FieldOffset(Offset = "0x24")]
	public Quaternion worldOrientation;

	[Token(Token = "0x400007F")]
	[FieldOffset(Offset = "0x34")]
	public float maxDistance;

	[Token(Token = "0x4000080")]
	[FieldOffset(Offset = "0x38")]
	public Vector2 scroll;

	[Token(Token = "0x4000081")]
	[FieldOffset(Offset = "0x40")]
	public int displayIndex;

	[Token(Token = "0x4000082")]
	[FieldOffset(Offset = "0x44")]
	public Vector2 tilt;

	[Token(Token = "0x4000083")]
	[FieldOffset(Offset = "0x4C")]
	public float twist;

	[Token(Token = "0x4000084")]
	[FieldOffset(Offset = "0x50")]
	public float pressure;

	[Token(Token = "0x4000085")]
	[FieldOffset(Offset = "0x54")]
	public bool isInverted;

	[Token(Token = "0x4000086")]
	[FieldOffset(Offset = "0x58")]
	public Button button;

	[Token(Token = "0x4000087")]
	[FieldOffset(Offset = "0x5C")]
	public ButtonsState buttonsState;

	[Token(Token = "0x4000088")]
	[FieldOffset(Offset = "0x60")]
	public int clickCount;

	[Token(Token = "0x17000026")]
	public bool isPrimaryPointer
	{
		[Token(Token = "0x6000056")]
		[Address(RVA = "0x2FC2A50", Offset = "0x2FC1050", VA = "0x182FC2A50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000027")]
	public Ray worldRay
	{
		[Token(Token = "0x6000057")]
		[Address(RVA = "0x2FC2A70", Offset = "0x2FC1070", VA = "0x182FC2A70")]
		get
		{
			return default(Ray);
		}
	}

	[Token(Token = "0x17000028")]
	public float azimuth
	{
		[Token(Token = "0x6000058")]
		[Address(RVA = "0x2FC2950", Offset = "0x2FC0F50", VA = "0x182FC2950")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000029")]
	public float altitude
	{
		[Token(Token = "0x6000059")]
		[Address(RVA = "0x2FC2900", Offset = "0x2FC0F00", VA = "0x182FC2900")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700002A")]
	public DiscreteTime timestamp
	{
		[Token(Token = "0x600005A")]
		[Address(RVA = "0x58A6F0", Offset = "0x588CF0", VA = "0x18058A6F0", Slot = "6")]
		[CompilerGenerated]
		readonly get
		{
			return default(DiscreteTime);
		}
		[Token(Token = "0x600005B")]
		[Address(RVA = "0x12BF3F0", Offset = "0x12BD9F0", VA = "0x1812BF3F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700002B")]
	public EventSource eventSource
	{
		[Token(Token = "0x600005C")]
		[Address(RVA = "0x58A560", Offset = "0x588B60", VA = "0x18058A560", Slot = "4")]
		[CompilerGenerated]
		readonly get
		{
			return default(EventSource);
		}
		[Token(Token = "0x600005D")]
		[Address(RVA = "0x58A8F0", Offset = "0x588EF0", VA = "0x18058A8F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700002C")]
	public uint playerId
	{
		[Token(Token = "0x600005E")]
		[Address(RVA = "0x261CA60", Offset = "0x261B060", VA = "0x18261CA60")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700002D")]
	public EventModifiers eventModifiers
	{
		[Token(Token = "0x600005F")]
		[Address(RVA = "0x58A600", Offset = "0x588C00", VA = "0x18058A600", Slot = "5")]
		[CompilerGenerated]
		readonly get
		{
			return default(EventModifiers);
		}
		[Token(Token = "0x6000060")]
		[Address(RVA = "0x58A990", Offset = "0x588F90", VA = "0x18058A990")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x2FC1A30", Offset = "0x2FC0030", VA = "0x182FC1A30", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x2FC1A20", Offset = "0x2FC0020", VA = "0x182FC1A20")]
	internal static Button ButtonFromButtonIndex(int index)
	{
		return default(Button);
	}
}
