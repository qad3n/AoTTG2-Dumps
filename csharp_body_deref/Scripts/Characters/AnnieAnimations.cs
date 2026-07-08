using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20004F1")]
internal class AnnieAnimations : BaseTitanAnimations
{
	[Token(Token = "0x4001730")]
	public const string IdleValue = "Armature_FemT|ft_idle";

	[Token(Token = "0x4001731")]
	public const string RunValue = "Armature_FemT|ft_run";

	[Token(Token = "0x4001732")]
	public const string WalkValue = "Armature_FemT|ft_walk";

	[Token(Token = "0x4001733")]
	public const string JumpValue = "Armature_FemT|ft_jump_start";

	[Token(Token = "0x4001734")]
	public const string FallValue = "Armature_FemT|ft_jump_air";

	[Token(Token = "0x4001735")]
	public const string LandValue = "Armature_FemT|ft_jump_land";

	[Token(Token = "0x4001736")]
	public const string DieValue = "Armature_FemT|ft_die_shifter";

	[Token(Token = "0x4001737")]
	public const string StunValue = "Armature_FemT|ft_hit_titan";

	[Token(Token = "0x4001738")]
	public const string SitFallValue = "Armature_FemT|ft_legHurt";

	[Token(Token = "0x4001739")]
	public const string SitIdleValue = "Armature_FemT|ft_legHurt_loop";

	[Token(Token = "0x400173A")]
	public const string SitUpValue = "Armature_FemT|ft_legHurt_getup";

	[Token(Token = "0x400173B")]
	public const string AttackComboValue = "Armature_FemT|ft_attack_combo_full";

	[Token(Token = "0x400173C")]
	public const string AttackComboBlindValue = "Armature_FemT|ft_attack_combo_blind_full";

	[Token(Token = "0x400173D")]
	public const string AttackSwingValue = "Armature_FemT|ft_attack_front";

	[Token(Token = "0x400173E")]
	public const string AttackBrushBackValue = "Armature_FemT|ft_attack_sweep_back";

	[Token(Token = "0x400173F")]
	public const string AttackBrushFrontLValue = "Armature_FemT|ft_attack_sweep_front_left";

	[Token(Token = "0x4001740")]
	public const string AttackBrushFrontRValue = "Armature_FemT|ft_attack_sweep_front_right";

	[Token(Token = "0x4001741")]
	public const string AttackBrushHeadLValue = "Armature_FemT|ft_attack_sweep_head_b_l";

	[Token(Token = "0x4001742")]
	public const string AttackBrushHeadRValue = "Armature_FemT|ft_attack_sweep_head_b_r";

	[Token(Token = "0x4001743")]
	public const string AttackGrabBottomLeftValue = "Armature_FemT|ft_attack_grab_bottom_left";

	[Token(Token = "0x4001744")]
	public const string AttackGrabBottomRightValue = "Armature_FemT|ft_attack_grab_bottom_right";

	[Token(Token = "0x4001745")]
	public const string AttackGrabMidLeftValue = "Armature_FemT|ft_attack_grab_mid_left";

	[Token(Token = "0x4001746")]
	public const string AttackGrabMidRightValue = "Armature_FemT|ft_attack_grab_mid_right";

	[Token(Token = "0x4001747")]
	public const string AttackGrabUpValue = "Armature_FemT|ft_attack_grab_up";

	[Token(Token = "0x4001748")]
	public const string AttackGrabUpLeftValue = "Armature_FemT|ft_attack_grab_up_left";

	[Token(Token = "0x4001749")]
	public const string AttackGrabUpRightValue = "Armature_FemT|ft_attack_grab_up_right";

	[Token(Token = "0x400174A")]
	public const string AttackKickValue = "Armature_FemT|ft_attack_sweep";

	[Token(Token = "0x400174B")]
	public const string AttackStompValue = "Armature_FemT|ft_attack_core";

	[Token(Token = "0x400174C")]
	public const string AttackHeadValue = "Armature_FemT|ft_attack_head";

	[Token(Token = "0x400174D")]
	public const string AttackBiteValue = "Armature_FemT|ft_attack_bite";

	[Token(Token = "0x400174E")]
	public const string EmoteSaluteValue = "Armature_FemT|ft_emote_salute";

	[Token(Token = "0x400174F")]
	public const string EmoteTauntValue = "Armature_FemT|ft_emote_taunt";

	[Token(Token = "0x4001750")]
	public const string EmoteWaveValue = "Armature_FemT|ft_emote_wave";

	[Token(Token = "0x4001751")]
	public const string EmoteRoarValue = "Armature_FemT|ft_mad1";

	[Token(Token = "0x4001752")]
	[FieldOffset(Offset = "0x10")]
	public string AttackCombo;

	[Token(Token = "0x4001753")]
	[FieldOffset(Offset = "0x18")]
	public string AttackComboBlind;

	[Token(Token = "0x4001754")]
	[FieldOffset(Offset = "0x20")]
	public string AttackSwing;

	[Token(Token = "0x4001755")]
	[FieldOffset(Offset = "0x28")]
	public string AttackBrushBack;

	[Token(Token = "0x4001756")]
	[FieldOffset(Offset = "0x30")]
	public string AttackBrushFrontL;

	[Token(Token = "0x4001757")]
	[FieldOffset(Offset = "0x38")]
	public string AttackBrushFrontR;

	[Token(Token = "0x4001758")]
	[FieldOffset(Offset = "0x40")]
	public string AttackBrushHeadL;

	[Token(Token = "0x4001759")]
	[FieldOffset(Offset = "0x48")]
	public string AttackBrushHeadR;

	[Token(Token = "0x400175A")]
	[FieldOffset(Offset = "0x50")]
	public string AttackGrabBottomLeft;

	[Token(Token = "0x400175B")]
	[FieldOffset(Offset = "0x58")]
	public string AttackGrabBottomRight;

	[Token(Token = "0x400175C")]
	[FieldOffset(Offset = "0x60")]
	public string AttackGrabMidLeft;

	[Token(Token = "0x400175D")]
	[FieldOffset(Offset = "0x68")]
	public string AttackGrabMidRight;

	[Token(Token = "0x400175E")]
	[FieldOffset(Offset = "0x70")]
	public string AttackGrabUp;

	[Token(Token = "0x400175F")]
	[FieldOffset(Offset = "0x78")]
	public string AttackGrabUpLeft;

	[Token(Token = "0x4001760")]
	[FieldOffset(Offset = "0x80")]
	public string AttackGrabUpRight;

	[Token(Token = "0x4001761")]
	[FieldOffset(Offset = "0x88")]
	public string AttackKick;

	[Token(Token = "0x4001762")]
	[FieldOffset(Offset = "0x90")]
	public string AttackStomp;

	[Token(Token = "0x4001763")]
	[FieldOffset(Offset = "0x98")]
	public string AttackHead;

	[Token(Token = "0x4001764")]
	[FieldOffset(Offset = "0xA0")]
	public string AttackBite;

	[Token(Token = "0x4001765")]
	[FieldOffset(Offset = "0xA8")]
	public string EmoteSalute;

	[Token(Token = "0x4001766")]
	[FieldOffset(Offset = "0xB0")]
	public string EmoteTaunt;

	[Token(Token = "0x4001767")]
	[FieldOffset(Offset = "0xB8")]
	public string EmoteWave;

	[Token(Token = "0x4001768")]
	[FieldOffset(Offset = "0xC0")]
	public string EmoteRoar;

	[Token(Token = "0x17000995")]
	public override string Idle
	{
		[Token(Token = "0x6003433")]
		[Address(RVA = "0x3EF0750", Offset = "0x3EF0750", VA = "0x3EF0750", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000996")]
	public override string Run
	{
		[Token(Token = "0x6003434")]
		[Address(RVA = "0x3EF0780", Offset = "0x3EF0780", VA = "0x3EF0780", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000997")]
	public override string Walk
	{
		[Token(Token = "0x6003435")]
		[Address(RVA = "0x3EF07B0", Offset = "0x3EF07B0", VA = "0x3EF07B0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000998")]
	public override string Jump
	{
		[Token(Token = "0x6003436")]
		[Address(RVA = "0x3EF07E0", Offset = "0x3EF07E0", VA = "0x3EF07E0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000999")]
	public override string Fall
	{
		[Token(Token = "0x6003437")]
		[Address(RVA = "0x3EF0810", Offset = "0x3EF0810", VA = "0x3EF0810", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700099A")]
	public override string Land
	{
		[Token(Token = "0x6003438")]
		[Address(RVA = "0x3EF0840", Offset = "0x3EF0840", VA = "0x3EF0840", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700099B")]
	public override string Die
	{
		[Token(Token = "0x6003439")]
		[Address(RVA = "0x3EF0870", Offset = "0x3EF0870", VA = "0x3EF0870", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700099C")]
	public override string Stun
	{
		[Token(Token = "0x600343A")]
		[Address(RVA = "0x3EF08A0", Offset = "0x3EF08A0", VA = "0x3EF08A0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700099D")]
	public override string SitFall
	{
		[Token(Token = "0x600343B")]
		[Address(RVA = "0x3EF08D0", Offset = "0x3EF08D0", VA = "0x3EF08D0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700099E")]
	public override string SitIdle
	{
		[Token(Token = "0x600343C")]
		[Address(RVA = "0x3EF0900", Offset = "0x3EF0900", VA = "0x3EF0900", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700099F")]
	public override string SitUp
	{
		[Token(Token = "0x600343D")]
		[Address(RVA = "0x3EF0930", Offset = "0x3EF0930", VA = "0x3EF0930", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600343E")]
	[Address(RVA = "0x3EF0960", Offset = "0x3EF0960", VA = "0x3EF0960")]
	public AnnieAnimations()
	{
	}
}
