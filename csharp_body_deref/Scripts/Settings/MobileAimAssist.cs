// ==================== AoTTG2 cross-reference ====================
// Type: Settings.MobileAimAssist
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Settings/MobileAimAssist.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Characters;
using GameManagers;
using Il2CppDummyDll;
using UnityEngine;

namespace Settings;

[Token(Token = "0x2000096")]
internal static class MobileAimAssist
{
	[Token(Token = "0x4000303")]
	private const float AimAssistDuration = 0.35f;

	[Token(Token = "0x4000304")]
	private const float BladeAttackRange = 2f;

	[Token(Token = "0x4000305")]
	private const float BladeAssistMaxRange = 60f;

	[Token(Token = "0x4000306")]
	private const float BladeAssistMinSpeed = 0.1f;

	[Token(Token = "0x4000307")]
	private const float BladeAssistMaxVelocityAngle = 89f;

	[Token(Token = "0x4000308")]
	private const float MaxNearestDistance = 120f;

	[Token(Token = "0x4000309")]
	[FieldOffset(Offset = "0x0")]
	private static BaseCharacter _target;

	[Token(Token = "0x400030A")]
	[FieldOffset(Offset = "0x8")]
	private static BaseCharacter _lastHookedTarget;

	[Token(Token = "0x400030B")]
	[FieldOffset(Offset = "0x10")]
	private static float _activeUntil;

	[Token(Token = "0x600042E")]
	[Address(RVA = "0x58CB7D0", Offset = "0x58CA7D0", VA = "0x58CB7D0")]
	public static void SnapToNearestTarget()
	{
	}

	[Token(Token = "0x600042F")]
	[Address(RVA = "0x58CC170", Offset = "0x58CB170", VA = "0x58CC170")]
	public static bool TryGetAimPoint(out Vector3 aimPoint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000430")]
	[Address(RVA = "0x58CC420", Offset = "0x58CB420", VA = "0x58CC420")]
	public static bool TryUpdateBladeFacing(Human human)
	{
		return default(bool);
	}

	[Token(Token = "0x6000431")]
	[Address(RVA = "0x58CC590", Offset = "0x58CB590", VA = "0x58CC590")]
	public static void UpdateBladeFacingLock()
	{
	}

	[Token(Token = "0x6000432")]
	[Address(RVA = "0x58CB9A0", Offset = "0x58CA9A0", VA = "0x58CB9A0")]
	private static BaseCharacter GetPreferredTarget(InGameManager manager, Human human)
	{
		return null;
	}

	[Token(Token = "0x6000433")]
	[Address(RVA = "0x58CB860", Offset = "0x58CA860", VA = "0x58CB860")]
	private static void UpdateLastHookedTarget(Human human)
	{
	}

	[Token(Token = "0x6000434")]
	[Address(RVA = "0x58CC670", Offset = "0x58CB670", VA = "0x58CC670")]
	private static bool IsValidTarget(BaseCharacter target, Human human)
	{
		return default(bool);
	}

	[Token(Token = "0x6000435")]
	[Address(RVA = "0x58CC760", Offset = "0x58CB760", VA = "0x58CC760")]
	private static BaseCharacter GetNearestTarget(InGameManager manager, Human human)
	{
		return null;
	}

	[Token(Token = "0x6000436")]
	[Address(RVA = "0x58CBB40", Offset = "0x58CAB40", VA = "0x58CBB40")]
	private static void ApplyBladeAssistMovement(Human human, BaseCharacter target)
	{
	}

	[Token(Token = "0x6000437")]
	[Address(RVA = "0x58CCBD0", Offset = "0x58CBBD0", VA = "0x58CCBD0")]
	private static float GetBladeAssistRange(BaseCharacter target)
	{
		return default(float);
	}

	[Token(Token = "0x6000438")]
	[Address(RVA = "0x58CC4A0", Offset = "0x58CB4A0", VA = "0x58CC4A0")]
	private static void FaceBladeTarget(Human human, Vector3 direction)
	{
	}

	[Token(Token = "0x6000439")]
	[Address(RVA = "0x58CC210", Offset = "0x58CB210", VA = "0x58CC210")]
	private static Vector3 GetTargetAimPoint(BaseCharacter character)
	{
		return default(Vector3);
	}
}
