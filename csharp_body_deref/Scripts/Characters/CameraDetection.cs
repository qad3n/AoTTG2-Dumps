// ==================== AoTTG2 cross-reference ====================
// Type: Characters.CameraDetection
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Characters/CameraDetection.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Detection/CameraDetection.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Cameras;
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x2000641")]
internal class CameraDetection : BaseDetection
{
	[Token(Token = "0x4001C49")]
	[FieldOffset(Offset = "0x78")]
	private InGameCamera _camera;

	[Token(Token = "0x17000AD6")]
	protected override bool RequireValidTarget
	{
		[Token(Token = "0x6003DC3")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003DC2")]
	[Address(RVA = "0x2113490", Offset = "0x2111A90", VA = "0x182113490")]
	public CameraDetection(InGameCamera camera)
	{
	}

	[Token(Token = "0x6003DC4")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "5")]
	public override bool IsNullOrDead()
	{
		return default(bool);
	}

	[Token(Token = "0x6003DC5")]
	[Address(RVA = "0x2113250", Offset = "0x2111850", VA = "0x182113250", Slot = "8")]
	protected override Vector3 GetPosition()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6003DC6")]
	[Address(RVA = "0x21132A0", Offset = "0x21118A0", VA = "0x1821132A0", Slot = "7")]
	protected override float GetSpeed()
	{
		return default(float);
	}

	[Token(Token = "0x6003DC7")]
	[Address(RVA = "0x21133F0", Offset = "0x21119F0", VA = "0x1821133F0")]
	public void RefreshFollow()
	{
	}

	[Token(Token = "0x6003DC8")]
	[Address(RVA = "0x2113340", Offset = "0x2111940", VA = "0x182113340", Slot = "9")]
	protected override void OnRecalculate(BaseCharacter character, float distance)
	{
	}
}
