// ==================== AoTTG2 cross-reference ====================
// Type: Settings.MobileInputBridge
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Settings/MobileInputBridge.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UI;
using UnityEngine;

namespace Settings;

[Token(Token = "0x200009B")]
internal class MobileInputBridge : MonoBehaviour
{
	[Token(Token = "0x400031F")]
	[FieldOffset(Offset = "0x0")]
	private static MobileInputBridge _instance;

	[Token(Token = "0x4000320")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Dictionary<string, MobileInput> _inputs;

	[Token(Token = "0x4000321")]
	[FieldOffset(Offset = "0x10")]
	private static Vector2 _moveVector;

	[Token(Token = "0x4000322")]
	[FieldOffset(Offset = "0x18")]
	private static Vector2 _lookDelta;

	[Token(Token = "0x4000323")]
	[FieldOffset(Offset = "0x20")]
	private static int _lookDeltaFrame;

	[Token(Token = "0x4000324")]
	[FieldOffset(Offset = "0x24")]
	private static int _lookConsumedFrame;

	[Token(Token = "0x4000325")]
	[FieldOffset(Offset = "0x28")]
	private static bool _autoGas;

	[Token(Token = "0x4000326")]
	[FieldOffset(Offset = "0x29")]
	private static bool _autoReelIn;

	[Token(Token = "0x4000327")]
	[FieldOffset(Offset = "0x2A")]
	private static bool _autoReelOut;

	[Token(Token = "0x4000328")]
	[FieldOffset(Offset = "0x30")]
	private static MobileInput _forwardInput;

	[Token(Token = "0x4000329")]
	[FieldOffset(Offset = "0x38")]
	private static MobileInput _backInput;

	[Token(Token = "0x400032A")]
	[FieldOffset(Offset = "0x40")]
	private static MobileInput _leftInput;

	[Token(Token = "0x400032B")]
	[FieldOffset(Offset = "0x48")]
	private static MobileInput _rightInput;

	[Token(Token = "0x400032C")]
	private const float MovePressThreshold = 0.38f;

	[Token(Token = "0x400032D")]
	[FieldOffset(Offset = "0x50")]
	public static bool AutoUseGasEnabled;

	[Token(Token = "0x400032E")]
	[FieldOffset(Offset = "0x58")]
	[CompilerGenerated]
	private static Action m_OnStateCleared;

	[Token(Token = "0x170000A1")]
	public static Vector2 RawMoveVector
	{
		[Token(Token = "0x600045A")]
		[Address(RVA = "0x58CEAF0", Offset = "0x58CDAF0", VA = "0x58CEAF0")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x170000A2")]
	public static bool Enabled
	{
		[Token(Token = "0x600045B")]
		[Address(RVA = "0x58CB850", Offset = "0x58CA850", VA = "0x58CB850")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000001")]
	public static event Action OnStateCleared
	{
		[Token(Token = "0x6000458")]
		[Address(RVA = "0x58CE930", Offset = "0x58CD930", VA = "0x58CE930")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000459")]
		[Address(RVA = "0x58CEA10", Offset = "0x58CDA10", VA = "0x58CEA10")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600045C")]
	[Address(RVA = "0x58CEB60", Offset = "0x58CDB60", VA = "0x58CEB60")]
	private static bool IsEnabledInSettings()
	{
		return default(bool);
	}

	[Token(Token = "0x600045D")]
	[Address(RVA = "0x58CEBD0", Offset = "0x58CDBD0", VA = "0x58CEBD0")]
	public static void Init()
	{
	}

	[Token(Token = "0x600045E")]
	[Address(RVA = "0x58CF6F0", Offset = "0x58CE6F0", VA = "0x58CF6F0")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x600045F")]
	[Address(RVA = "0x58CF8F0", Offset = "0x58CE8F0", VA = "0x58CF8F0")]
	public static void Bind(KeybindSetting keybind, string actionId)
	{
	}

	[Token(Token = "0x6000460")]
	[Address(RVA = "0x58CF990", Offset = "0x58CE990", VA = "0x58CF990")]
	public static bool GetKey(KeybindSetting keybind)
	{
		return default(bool);
	}

	[Token(Token = "0x6000461")]
	[Address(RVA = "0x58CF4D0", Offset = "0x58CE4D0", VA = "0x58CF4D0")]
	public static MobileInput GetActionInput(string id)
	{
		return null;
	}

	[Token(Token = "0x6000462")]
	[Address(RVA = "0x58CFC90", Offset = "0x58CEC90", VA = "0x58CFC90")]
	public static MobileInput[] GetActionInputs(string[] actionIds)
	{
		return null;
	}

	[Token(Token = "0x6000463")]
	[Address(RVA = "0x58CFEA0", Offset = "0x58CEEA0", VA = "0x58CFEA0")]
	public static void RegisterActionDisplayName(string actionId, MobileInputLayoutRole role, string displayName)
	{
	}

	[Token(Token = "0x6000464")]
	[Address(RVA = "0x58CFF30", Offset = "0x58CEF30", VA = "0x58CFF30")]
	public static void RegisterActionDisplayNames(string[] actionIds, MobileInputLayoutRole role, string displayName)
	{
	}

	[Token(Token = "0x6000465")]
	[Address(RVA = "0x58D0060", Offset = "0x58CF060", VA = "0x58D0060")]
	public static void ClearDisplayNames()
	{
	}

	[Token(Token = "0x6000466")]
	[Address(RVA = "0x58D0220", Offset = "0x58CF220", VA = "0x58D0220")]
	public static void SetMoveVector(Vector2 move)
	{
	}

	[Token(Token = "0x6000467")]
	[Address(RVA = "0x58D05B0", Offset = "0x58CF5B0", VA = "0x58D05B0")]
	public static void AddLookDelta(Vector2 delta)
	{
	}

	[Token(Token = "0x6000468")]
	[Address(RVA = "0x58D06D0", Offset = "0x58CF6D0", VA = "0x58D06D0")]
	public static void SetAutoGas(bool active)
	{
	}

	[Token(Token = "0x6000469")]
	[Address(RVA = "0x58D0740", Offset = "0x58CF740", VA = "0x58D0740")]
	public static void SetAutoReel(bool reelIn, bool reelOut)
	{
	}

	[Token(Token = "0x600046A")]
	[Address(RVA = "0x58D07B0", Offset = "0x58CF7B0", VA = "0x58D07B0")]
	public static Vector2 ConsumeLookDelta()
	{
		return default(Vector2);
	}

	[Token(Token = "0x600046B")]
	[Address(RVA = "0x58D05F0", Offset = "0x58CF5F0", VA = "0x58D05F0")]
	private static void DiscardUnconsumedLookDelta()
	{
	}

	[Token(Token = "0x600046C")]
	[Address(RVA = "0x58D0840", Offset = "0x58CF840", VA = "0x58D0840")]
	public static void ClearState()
	{
	}

	[Token(Token = "0x600046D")]
	[Address(RVA = "0x58D0AB0", Offset = "0x58CFAB0", VA = "0x58D0AB0")]
	public static bool TryGetKeyName(KeybindSetting keybind, out string keyName)
	{
		return default(bool);
	}

	[Token(Token = "0x600046E")]
	[Address(RVA = "0x58D0B20", Offset = "0x58CFB20", VA = "0x58D0B20")]
	public static MobileInputLayoutRole[] GetActiveLayoutRoles()
	{
		return null;
	}

	[Token(Token = "0x600046F")]
	[Address(RVA = "0x58CF110", Offset = "0x58CE110", VA = "0x58CF110")]
	private static void RegisterDefaultBindings()
	{
	}

	[Token(Token = "0x6000470")]
	[Address(RVA = "0x58CF000", Offset = "0x58CE000", VA = "0x58CF000")]
	private static void RegisterMovementInputs()
	{
	}

	[Token(Token = "0x6000471")]
	[Address(RVA = "0x58D0D40", Offset = "0x58CFD40", VA = "0x58D0D40")]
	private static MobileInput GetOrCreateInput(string id)
	{
		return null;
	}

	[Token(Token = "0x6000472")]
	[Address(RVA = "0x58CF9E0", Offset = "0x58CE9E0", VA = "0x58CF9E0")]
	private static MobileInput GetMovementInput(string id)
	{
		return null;
	}

	[Token(Token = "0x6000473")]
	[Address(RVA = "0x58D0ED0", Offset = "0x58CFED0", VA = "0x58D0ED0")]
	public MobileInputBridge()
	{
	}
}
