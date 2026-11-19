// ==================== AoTTG2 cross-reference ====================
// Type: Characters.AnnieAnimations
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/AnnieAnimations.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Shifters/Annie/AnnieAnimations.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006F0")]
internal class AnnieAnimations : BaseTitanAnimations
{
	[Token(Token = "0x400208C")]
	public const string IdleValue = "Armature_FemT|ft_idle";

	[Token(Token = "0x400208D")]
	public const string RunValue = "Armature_FemT|ft_run";

	[Token(Token = "0x400208E")]
	public const string WalkValue = "Armature_FemT|ft_walk";

	[Token(Token = "0x400208F")]
	public const string JumpValue = "Armature_FemT|ft_jump_start";

	[Token(Token = "0x4002090")]
	public const string FallValue = "Armature_FemT|ft_jump_air";

	[Token(Token = "0x4002091")]
	public const string LandValue = "Armature_FemT|ft_jump_land";

	[Token(Token = "0x4002092")]
	public const string DieValue = "Armature_FemT|ft_die_shifter";

	[Token(Token = "0x4002093")]
	public const string StunValue = "Armature_FemT|ft_hit_titan";

	[Token(Token = "0x4002094")]
	public const string SitFallValue = "Armature_FemT|ft_legHurt";

	[Token(Token = "0x4002095")]
	public const string SitIdleValue = "Armature_FemT|ft_legHurt_loop";

	[Token(Token = "0x4002096")]
	public const string SitUpValue = "Armature_FemT|ft_legHurt_getup";

	[Token(Token = "0x4002097")]
	public const string AttackComboValue = "Armature_FemT|ft_attack_combo_full";

	[Token(Token = "0x4002098")]
	public const string AttackComboBlindValue = "Armature_FemT|ft_attack_combo_blind_full";

	[Token(Token = "0x4002099")]
	public const string AttackSwingValue = "Armature_FemT|ft_attack_front";

	[Token(Token = "0x400209A")]
	public const string AttackBrushBackValue = "Armature_FemT|ft_attack_sweep_back";

	[Token(Token = "0x400209B")]
	public const string AttackBrushFrontLValue = "Armature_FemT|ft_attack_sweep_front_left";

	[Token(Token = "0x400209C")]
	public const string AttackBrushFrontRValue = "Armature_FemT|ft_attack_sweep_front_right";

	[Token(Token = "0x400209D")]
	public const string AttackBrushHeadLValue = "Armature_FemT|ft_attack_sweep_head_b_l";

	[Token(Token = "0x400209E")]
	public const string AttackBrushHeadRValue = "Armature_FemT|ft_attack_sweep_head_b_r";

	[Token(Token = "0x400209F")]
	public const string AttackGrabBottomLeftValue = "Armature_FemT|ft_attack_grab_bottom_left";

	[Token(Token = "0x40020A0")]
	public const string AttackGrabBottomRightValue = "Armature_FemT|ft_attack_grab_bottom_right";

	[Token(Token = "0x40020A1")]
	public const string AttackGrabMidLeftValue = "Armature_FemT|ft_attack_grab_mid_left";

	[Token(Token = "0x40020A2")]
	public const string AttackGrabMidRightValue = "Armature_FemT|ft_attack_grab_mid_right";

	[Token(Token = "0x40020A3")]
	public const string AttackGrabUpValue = "Armature_FemT|ft_attack_grab_up";

	[Token(Token = "0x40020A4")]
	public const string AttackGrabUpLeftValue = "Armature_FemT|ft_attack_grab_up_left";

	[Token(Token = "0x40020A5")]
	public const string AttackGrabUpRightValue = "Armature_FemT|ft_attack_grab_up_right";

	[Token(Token = "0x40020A6")]
	public const string AttackKickValue = "Armature_FemT|ft_attack_sweep";

	[Token(Token = "0x40020A7")]
	public const string AttackStompValue = "Armature_FemT|ft_attack_core";

	[Token(Token = "0x40020A8")]
	public const string AttackHeadValue = "Armature_FemT|ft_attack_head";

	[Token(Token = "0x40020A9")]
	public const string AttackBiteValue = "Armature_FemT|ft_attack_bite";

	[Token(Token = "0x40020AA")]
	public const string EmoteSaluteValue = "Armature_FemT|ft_emote_salute";

	[Token(Token = "0x40020AB")]
	public const string EmoteTauntValue = "Armature_FemT|ft_emote_taunt";

	[Token(Token = "0x40020AC")]
	public const string EmoteWaveValue = "Armature_FemT|ft_emote_wave";

	[Token(Token = "0x40020AD")]
	public const string EmoteRoarValue = "Armature_FemT|ft_mad1";

	[Token(Token = "0x40020AE")]
	[FieldOffset(Offset = "0x10")]
	public string AttackCombo;

	[Token(Token = "0x40020AF")]
	[FieldOffset(Offset = "0x18")]
	public string AttackComboBlind;

	[Token(Token = "0x40020B0")]
	[FieldOffset(Offset = "0x20")]
	public string AttackSwing;

	[Token(Token = "0x40020B1")]
	[FieldOffset(Offset = "0x28")]
	public string AttackBrushBack;

	[Token(Token = "0x40020B2")]
	[FieldOffset(Offset = "0x30")]
	public string AttackBrushFrontL;

	[Token(Token = "0x40020B3")]
	[FieldOffset(Offset = "0x38")]
	public string AttackBrushFrontR;

	[Token(Token = "0x40020B4")]
	[FieldOffset(Offset = "0x40")]
	public string AttackBrushHeadL;

	[Token(Token = "0x40020B5")]
	[FieldOffset(Offset = "0x48")]
	public string AttackBrushHeadR;

	[Token(Token = "0x40020B6")]
	[FieldOffset(Offset = "0x50")]
	public string AttackGrabBottomLeft;

	[Token(Token = "0x40020B7")]
	[FieldOffset(Offset = "0x58")]
	public string AttackGrabBottomRight;

	[Token(Token = "0x40020B8")]
	[FieldOffset(Offset = "0x60")]
	public string AttackGrabMidLeft;

	[Token(Token = "0x40020B9")]
	[FieldOffset(Offset = "0x68")]
	public string AttackGrabMidRight;

	[Token(Token = "0x40020BA")]
	[FieldOffset(Offset = "0x70")]
	public string AttackGrabUp;

	[Token(Token = "0x40020BB")]
	[FieldOffset(Offset = "0x78")]
	public string AttackGrabUpLeft;

	[Token(Token = "0x40020BC")]
	[FieldOffset(Offset = "0x80")]
	public string AttackGrabUpRight;

	[Token(Token = "0x40020BD")]
	[FieldOffset(Offset = "0x88")]
	public string AttackKick;

	[Token(Token = "0x40020BE")]
	[FieldOffset(Offset = "0x90")]
	public string AttackStomp;

	[Token(Token = "0x40020BF")]
	[FieldOffset(Offset = "0x98")]
	public string AttackHead;

	[Token(Token = "0x40020C0")]
	[FieldOffset(Offset = "0xA0")]
	public string AttackBite;

	[Token(Token = "0x40020C1")]
	[FieldOffset(Offset = "0xA8")]
	public string EmoteSalute;

	[Token(Token = "0x40020C2")]
	[FieldOffset(Offset = "0xB0")]
	public string EmoteTaunt;

	[Token(Token = "0x40020C3")]
	[FieldOffset(Offset = "0xB8")]
	public string EmoteWave;

	[Token(Token = "0x40020C4")]
	[FieldOffset(Offset = "0xC0")]
	public string EmoteRoar;

	[Token(Token = "0x17000B7D")]
	public override string Idle
	{
		[Token(Token = "0x6004319")]
		[Address(RVA = "0x5B13A90", Offset = "0x5B12A90", VA = "0x5B13A90", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Characters/AnnieAnimations.c (Characters.AnnieAnimations$$get_Idle): clean
			return "Armature_FemT|ft_idle";
		}
	}

	[Token(Token = "0x17000B7E")]
	public override string Run
	{
		[Token(Token = "0x600431A")]
		[Address(RVA = "0x5B13AC0", Offset = "0x5B12AC0", VA = "0x5B13AC0", Slot = "5")]
		get
		{
			// Lifted from source/cpp/Characters/AnnieAnimations.c (Characters.AnnieAnimations$$get_Run): clean
			return "Armature_FemT|ft_run";
		}
	}

	[Token(Token = "0x17000B7F")]
	public override string Walk
	{
		[Token(Token = "0x600431B")]
		[Address(RVA = "0x5B13AF0", Offset = "0x5B12AF0", VA = "0x5B13AF0", Slot = "7")]
		get
		{
			// Lifted from source/cpp/Characters/AnnieAnimations.c (Characters.AnnieAnimations$$get_Walk): clean
			return "Armature_FemT|ft_walk";
		}
	}

	[Token(Token = "0x17000B80")]
	public override string Jump
	{
		[Token(Token = "0x600431C")]
		[Address(RVA = "0x5B13B20", Offset = "0x5B12B20", VA = "0x5B13B20", Slot = "8")]
		get
		{
			// Lifted from source/cpp/Characters/AnnieAnimations.c (Characters.AnnieAnimations$$get_Jump): clean
			return "Armature_FemT|ft_jump_start";
		}
	}

	[Token(Token = "0x17000B81")]
	public override string Fall
	{
		[Token(Token = "0x600431D")]
		[Address(RVA = "0x5B13B50", Offset = "0x5B12B50", VA = "0x5B13B50", Slot = "9")]
		get
		{
			// Lifted from source/cpp/Characters/AnnieAnimations.c (Characters.AnnieAnimations$$get_Fall): clean
			return "Armature_FemT|ft_jump_air";
		}
	}

	[Token(Token = "0x17000B82")]
	public override string Land
	{
		[Token(Token = "0x600431E")]
		[Address(RVA = "0x5B13B80", Offset = "0x5B12B80", VA = "0x5B13B80", Slot = "10")]
		get
		{
			// Lifted from source/cpp/Characters/AnnieAnimations.c (Characters.AnnieAnimations$$get_Land): clean
			return "Armature_FemT|ft_jump_land";
		}
	}

	[Token(Token = "0x17000B83")]
	public override string Die
	{
		[Token(Token = "0x600431F")]
		[Address(RVA = "0x5B13BB0", Offset = "0x5B12BB0", VA = "0x5B13BB0", Slot = "12")]
		get
		{
			// Lifted from source/cpp/Characters/AnnieAnimations.c (Characters.AnnieAnimations$$get_Die): clean
			return "Armature_FemT|ft_die_shifter";
		}
	}

	[Token(Token = "0x17000B84")]
	public override string Stun
	{
		[Token(Token = "0x6004320")]
		[Address(RVA = "0x5B13BE0", Offset = "0x5B12BE0", VA = "0x5B13BE0", Slot = "11")]
		get
		{
			// Lifted from source/cpp/Characters/AnnieAnimations.c (Characters.AnnieAnimations$$get_Stun): clean
			return "Armature_FemT|ft_hit_titan";
		}
	}

	[Token(Token = "0x17000B85")]
	public override string SitFall
	{
		[Token(Token = "0x6004321")]
		[Address(RVA = "0x5B13C10", Offset = "0x5B12C10", VA = "0x5B13C10", Slot = "17")]
		get
		{
			// Lifted from source/cpp/Characters/AnnieAnimations.c (Characters.AnnieAnimations$$get_SitFall): clean
			return "Armature_FemT|ft_legHurt";
		}
	}

	[Token(Token = "0x17000B86")]
	public override string SitIdle
	{
		[Token(Token = "0x6004322")]
		[Address(RVA = "0x5B13C40", Offset = "0x5B12C40", VA = "0x5B13C40", Slot = "14")]
		get
		{
			// Lifted from source/cpp/Characters/AnnieAnimations.c (Characters.AnnieAnimations$$get_SitIdle): clean
			return "Armature_FemT|ft_legHurt_loop";
		}
	}

	[Token(Token = "0x17000B87")]
	public override string SitUp
	{
		[Token(Token = "0x6004323")]
		[Address(RVA = "0x5B13C70", Offset = "0x5B12C70", VA = "0x5B13C70", Slot = "16")]
		get
		{
			// Lifted from source/cpp/Characters/AnnieAnimations.c (Characters.AnnieAnimations$$get_SitUp): clean
			return "Armature_FemT|ft_legHurt_getup";
		}
	}

	[Token(Token = "0x6004324")]
	[Address(RVA = "0x5B13CA0", Offset = "0x5B12CA0", VA = "0x5B13CA0")]
	public AnnieAnimations()
	{
		// Lifted from source/cpp/Characters/AnnieAnimations.c (Characters.AnnieAnimations$$.ctor): clean
		this.AttackCombo = "Armature_FemT|ft_attack_combo_full";
		this.AttackComboBlind = "Armature_FemT|ft_attack_combo_blind_full";
		this.AttackSwing = "Armature_FemT|ft_attack_front";
		this.AttackBrushBack = "Armature_FemT|ft_attack_sweep_back";
		this.AttackBrushFrontL = "Armature_FemT|ft_attack_sweep_front_left";
		this.AttackBrushFrontR = "Armature_FemT|ft_attack_sweep_front_right";
		this.AttackBrushHeadL = "Armature_FemT|ft_attack_sweep_head_b_l";
		this.AttackBrushHeadR = "Armature_FemT|ft_attack_sweep_head_b_r";
		this.AttackGrabBottomLeft = "Armature_FemT|ft_attack_grab_bottom_left";
		this.AttackGrabBottomRight = "Armature_FemT|ft_attack_grab_bottom_right";
		this.AttackGrabMidLeft = "Armature_FemT|ft_attack_grab_mid_left";
		this.AttackGrabMidRight = "Armature_FemT|ft_attack_grab_mid_right";
		this.AttackGrabUp = "Armature_FemT|ft_attack_grab_up";
		this.AttackGrabUpLeft = "Armature_FemT|ft_attack_grab_up_left";
		this.AttackGrabUpRight = "Armature_FemT|ft_attack_grab_up_right";
		this.AttackKick = "Armature_FemT|ft_attack_sweep";
		this.AttackStomp = "Armature_FemT|ft_attack_core";
		this.AttackHead = "Armature_FemT|ft_attack_head";
		this.AttackBite = "Armature_FemT|ft_attack_bite";
		this.EmoteSalute = "Armature_FemT|ft_emote_salute";
		this.EmoteTaunt = "Armature_FemT|ft_emote_taunt";
		this.EmoteWave = "Armature_FemT|ft_emote_wave";
		this.EmoteRoar = "Armature_FemT|ft_mad1";
		base();
		return;
	}
}
