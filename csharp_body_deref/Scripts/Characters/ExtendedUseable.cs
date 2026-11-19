// ==================== AoTTG2 cross-reference ====================
// Type: Characters.ExtendedUseable
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/ExtendedUseable.c
// Prior real C# source (older reference): Assets/Scripts/Characters/BaseUseable/ExtendedUseable.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Settings;

namespace Characters;

[Token(Token = "0x2000697")]
internal abstract class ExtendedUseable : BaseUseable
{
	[Token(Token = "0x4001DC9")]
	[FieldOffset(Offset = "0x38")]
	protected float _activeTimeLeft;

	[Token(Token = "0x17000B1B")]
	protected virtual float ActiveTime
	{
		[Token(Token = "0x6004021")]
		[Address(RVA = "0x5ABCC30", Offset = "0x5ABBC30", VA = "0x5ABCC30", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6004022")]
	[Address(RVA = "0x5ABCC40", Offset = "0x5ABBC40", VA = "0x5ABCC40")]
	public ExtendedUseable(BaseCharacter owner)
	{
	}

	[Token(Token = "0x6004023")]
	[Address(RVA = "0x5ABCC80", Offset = "0x5ABBC80", VA = "0x5ABCC80", Slot = "15")]
	protected virtual float GetActiveTime()
	{
		return default(float);
	}

	[Token(Token = "0x6004024")]
	[Address(RVA = "0x5ABCCA0", Offset = "0x5ABBCA0", VA = "0x5ABCCA0", Slot = "11")]
	public override void ReadInput(KeybindSetting keybind)
	{
	}

	[Token(Token = "0x6004025")]
	[Address(RVA = "0x5ABCCE0", Offset = "0x5ABBCE0", VA = "0x5ABCCE0", Slot = "12")]
	public override void SetInput(bool key)
	{
	}

	[Token(Token = "0x6004026")]
	[Address(RVA = "0x5ABCD50", Offset = "0x5ABBD50", VA = "0x5ABCD50", Slot = "13")]
	public override void OnFixedUpdate()
	{
	}

	[Token(Token = "0x6004027")]
	[Address(RVA = "0x5ABCDD0", Offset = "0x5ABBDD0", VA = "0x5ABCDD0", Slot = "16")]
	protected virtual void ActiveFixedUpdate()
	{
	}
}
