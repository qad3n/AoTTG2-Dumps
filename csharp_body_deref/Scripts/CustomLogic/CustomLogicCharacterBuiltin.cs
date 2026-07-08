using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Characters;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20002CD")]
[CompilerGenerated]
internal abstract class CustomLogicCharacterBuiltin : BuiltinClassInstance, ICustomLogicEquals
{
	[Token(Token = "0x20002CE")]
	public static class Factory
	{
		[Token(Token = "0x6001449")]
		[Address(RVA = "0x3CFA860", Offset = "0x3CFA860", VA = "0x3CFA860")]
		public static CustomLogicCharacterBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20002CF")]
	public static class Bindings
	{
		[Token(Token = "0x4000E31")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x600144A")]
		[Address(RVA = "0x3CFA8F0", Offset = "0x3CFA8F0", VA = "0x3CFA8F0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x600144B")]
		[Address(RVA = "0x3CFBAE0", Offset = "0x3CFBAE0", VA = "0x3CFBAE0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Name()
		{
			return null;
		}

		[Token(Token = "0x600144C")]
		[Address(RVA = "0x3CFBBC0", Offset = "0x3CFBBC0", VA = "0x3CFBBC0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Guild()
		{
			return null;
		}

		[Token(Token = "0x600144D")]
		[Address(RVA = "0x3CFBCA0", Offset = "0x3CFBCA0", VA = "0x3CFBCA0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Player()
		{
			return null;
		}

		[Token(Token = "0x600144E")]
		[Address(RVA = "0x3CFBD40", Offset = "0x3CFBD40", VA = "0x3CFBD40")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__IsAI()
		{
			return null;
		}

		[Token(Token = "0x600144F")]
		[Address(RVA = "0x3CFBDE0", Offset = "0x3CFBDE0", VA = "0x3CFBDE0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__IsAlive()
		{
			return null;
		}

		[Token(Token = "0x6001450")]
		[Address(RVA = "0x3CFBE80", Offset = "0x3CFBE80", VA = "0x3CFBE80")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__ViewID()
		{
			return null;
		}

		[Token(Token = "0x6001451")]
		[Address(RVA = "0x3CFBF20", Offset = "0x3CFBF20", VA = "0x3CFBF20")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__IsMine()
		{
			return null;
		}

		[Token(Token = "0x6001452")]
		[Address(RVA = "0x3CFBFC0", Offset = "0x3CFBFC0", VA = "0x3CFBFC0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__IsMainCharacter()
		{
			return null;
		}

		[Token(Token = "0x6001453")]
		[Address(RVA = "0x3CFC060", Offset = "0x3CFC060", VA = "0x3CFC060")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Transform()
		{
			return null;
		}

		[Token(Token = "0x6001454")]
		[Address(RVA = "0x3CFC100", Offset = "0x3CFC100", VA = "0x3CFC100")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Position()
		{
			return null;
		}

		[Token(Token = "0x6001455")]
		[Address(RVA = "0x3CFC1E0", Offset = "0x3CFC1E0", VA = "0x3CFC1E0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Rotation()
		{
			return null;
		}

		[Token(Token = "0x6001456")]
		[Address(RVA = "0x3CFC2C0", Offset = "0x3CFC2C0", VA = "0x3CFC2C0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__QuaternionRotation()
		{
			return null;
		}

		[Token(Token = "0x6001457")]
		[Address(RVA = "0x3CFC3A0", Offset = "0x3CFC3A0", VA = "0x3CFC3A0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Velocity()
		{
			return null;
		}

		[Token(Token = "0x6001458")]
		[Address(RVA = "0x3CFC480", Offset = "0x3CFC480", VA = "0x3CFC480")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Forward()
		{
			return null;
		}

		[Token(Token = "0x6001459")]
		[Address(RVA = "0x3CFC560", Offset = "0x3CFC560", VA = "0x3CFC560")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Right()
		{
			return null;
		}

		[Token(Token = "0x600145A")]
		[Address(RVA = "0x3CFC640", Offset = "0x3CFC640", VA = "0x3CFC640")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Up()
		{
			return null;
		}

		[Token(Token = "0x600145B")]
		[Address(RVA = "0x3CFC720", Offset = "0x3CFC720", VA = "0x3CFC720")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__HasTargetDirection()
		{
			return null;
		}

		[Token(Token = "0x600145C")]
		[Address(RVA = "0x3CFC7C0", Offset = "0x3CFC7C0", VA = "0x3CFC7C0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__TargetDirection()
		{
			return null;
		}

		[Token(Token = "0x600145D")]
		[Address(RVA = "0x3CFC8A0", Offset = "0x3CFC8A0", VA = "0x3CFC8A0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Team()
		{
			return null;
		}

		[Token(Token = "0x600145E")]
		[Address(RVA = "0x3CFC980", Offset = "0x3CFC980", VA = "0x3CFC980")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Health()
		{
			return null;
		}

		[Token(Token = "0x600145F")]
		[Address(RVA = "0x3CFCA60", Offset = "0x3CFCA60", VA = "0x3CFCA60")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__MaxHealth()
		{
			return null;
		}

		[Token(Token = "0x6001460")]
		[Address(RVA = "0x3CFCB40", Offset = "0x3CFCB40", VA = "0x3CFCB40")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__CustomDamageEnabled()
		{
			return null;
		}

		[Token(Token = "0x6001461")]
		[Address(RVA = "0x3CFCC20", Offset = "0x3CFCC20", VA = "0x3CFCC20")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__CustomDamage()
		{
			return null;
		}

		[Token(Token = "0x6001462")]
		[Address(RVA = "0x3CFCD00", Offset = "0x3CFCD00", VA = "0x3CFCD00")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__CurrentAnimation()
		{
			return null;
		}

		[Token(Token = "0x6001463")]
		[Address(RVA = "0x3CFCDA0", Offset = "0x3CFCDA0", VA = "0x3CFCDA0")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Grounded()
		{
			return null;
		}

		[Token(Token = "0x6001464")]
		[Address(RVA = "0x3CFCE40", Offset = "0x3CFCE40", VA = "0x3CFCE40")]
		public static CLPropertyBinding<CustomLogicCharacterBuiltin> __CreatePropertyBinding__Rigidbody()
		{
			return null;
		}

		[Token(Token = "0x6001465")]
		[Address(RVA = "0x3CFCEE0", Offset = "0x3CFCEE0", VA = "0x3CFCEE0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__SetDisplayName()
		{
			return null;
		}

		[Token(Token = "0x6001466")]
		[Address(RVA = "0x3CFD030", Offset = "0x3CFD030", VA = "0x3CFD030")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__GetKilled()
		{
			return null;
		}

		[Token(Token = "0x6001467")]
		[Address(RVA = "0x3CFD180", Offset = "0x3CFD180", VA = "0x3CFD180")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__GetDamaged()
		{
			return null;
		}

		[Token(Token = "0x6001468")]
		[Address(RVA = "0x3CFD2D0", Offset = "0x3CFD2D0", VA = "0x3CFD2D0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__Emote()
		{
			return null;
		}

		[Token(Token = "0x6001469")]
		[Address(RVA = "0x3CFD420", Offset = "0x3CFD420", VA = "0x3CFD420")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__PlayAnimation()
		{
			return null;
		}

		[Token(Token = "0x600146A")]
		[Address(RVA = "0x3CFD570", Offset = "0x3CFD570", VA = "0x3CFD570")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__PlayAnimationAt()
		{
			return null;
		}

		[Token(Token = "0x600146B")]
		[Address(RVA = "0x3CFD6C0", Offset = "0x3CFD6C0", VA = "0x3CFD6C0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__GetAnimationSpeed()
		{
			return null;
		}

		[Token(Token = "0x600146C")]
		[Address(RVA = "0x3CFD810", Offset = "0x3CFD810", VA = "0x3CFD810")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__SetAnimationSpeed()
		{
			return null;
		}

		[Token(Token = "0x600146D")]
		[Address(RVA = "0x3CFD960", Offset = "0x3CFD960", VA = "0x3CFD960")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__IsPlayingAnimation()
		{
			return null;
		}

		[Token(Token = "0x600146E")]
		[Address(RVA = "0x3CFDAB0", Offset = "0x3CFDAB0", VA = "0x3CFDAB0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__GetAnimationNormalizedTime()
		{
			return null;
		}

		[Token(Token = "0x600146F")]
		[Address(RVA = "0x3CFDC00", Offset = "0x3CFDC00", VA = "0x3CFDC00")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__ForceAnimation()
		{
			return null;
		}

		[Token(Token = "0x6001470")]
		[Address(RVA = "0x3CFDD50", Offset = "0x3CFDD50", VA = "0x3CFDD50")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__GetAnimationLength()
		{
			return null;
		}

		[Token(Token = "0x6001471")]
		[Address(RVA = "0x3CFDEA0", Offset = "0x3CFDEA0", VA = "0x3CFDEA0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__IsPlayingSound()
		{
			return null;
		}

		[Token(Token = "0x6001472")]
		[Address(RVA = "0x3CFDFF0", Offset = "0x3CFDFF0", VA = "0x3CFDFF0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__PlaySound()
		{
			return null;
		}

		[Token(Token = "0x6001473")]
		[Address(RVA = "0x3CFE140", Offset = "0x3CFE140", VA = "0x3CFE140")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__StopSound()
		{
			return null;
		}

		[Token(Token = "0x6001474")]
		[Address(RVA = "0x3CFE290", Offset = "0x3CFE290", VA = "0x3CFE290")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__FadeSound()
		{
			return null;
		}

		[Token(Token = "0x6001475")]
		[Address(RVA = "0x3CFE3E0", Offset = "0x3CFE3E0", VA = "0x3CFE3E0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__LookAt()
		{
			return null;
		}

		[Token(Token = "0x6001476")]
		[Address(RVA = "0x3CFE530", Offset = "0x3CFE530", VA = "0x3CFE530")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__AddForce()
		{
			return null;
		}

		[Token(Token = "0x6001477")]
		[Address(RVA = "0x3CFE680", Offset = "0x3CFE680", VA = "0x3CFE680")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__Reveal()
		{
			return null;
		}

		[Token(Token = "0x6001478")]
		[Address(RVA = "0x3CFE7D0", Offset = "0x3CFE7D0", VA = "0x3CFE7D0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__AddOutline()
		{
			return null;
		}

		[Token(Token = "0x6001479")]
		[Address(RVA = "0x3CFE920", Offset = "0x3CFE920", VA = "0x3CFE920")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding__RemoveOutline()
		{
			return null;
		}

		[Token(Token = "0x600147A")]
		[Address(RVA = "0x3CFEA70", Offset = "0x3CFEA70", VA = "0x3CFEA70")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding____Eq__()
		{
			return null;
		}

		[Token(Token = "0x600147B")]
		[Address(RVA = "0x3CFEBC0", Offset = "0x3CFEBC0", VA = "0x3CFEBC0")]
		public static CLMethodBinding<CustomLogicCharacterBuiltin> __CreateMethodBinding____Hash__()
		{
			return null;
		}
	}

	[Token(Token = "0x4000E30")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public readonly BaseCharacter Character;

	[Token(Token = "0x17000288")]
	public string Name
	{
		[Token(Token = "0x6001403")]
		[Address(RVA = "0x3CF8EB0", Offset = "0x3CF8EB0", VA = "0x3CF8EB0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001404")]
		[Address(RVA = "0x3CF8ED0", Offset = "0x3CF8ED0", VA = "0x3CF8ED0")]
		set
		{
		}
	}

	[Token(Token = "0x17000289")]
	public string Guild
	{
		[Token(Token = "0x6001406")]
		[Address(RVA = "0x3CF8F60", Offset = "0x3CF8F60", VA = "0x3CF8F60")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001407")]
		[Address(RVA = "0x3CF8F80", Offset = "0x3CF8F80", VA = "0x3CF8F80")]
		set
		{
		}
	}

	[Token(Token = "0x1700028A")]
	public CustomLogicPlayerBuiltin Player
	{
		[Token(Token = "0x6001408")]
		[Address(RVA = "0x3CF8FA0", Offset = "0x3CF8FA0", VA = "0x3CF8FA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700028B")]
	public bool IsAI
	{
		[Token(Token = "0x6001409")]
		[Address(RVA = "0x3CF9020", Offset = "0x3CF9020", VA = "0x3CF9020")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700028C")]
	public bool IsAlive
	{
		[Token(Token = "0x600140A")]
		[Address(RVA = "0x3CF9040", Offset = "0x3CF9040", VA = "0x3CF9040")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700028D")]
	public int ViewID
	{
		[Token(Token = "0x600140B")]
		[Address(RVA = "0x3CF90B0", Offset = "0x3CF90B0", VA = "0x3CF90B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700028E")]
	public bool IsMine
	{
		[Token(Token = "0x600140C")]
		[Address(RVA = "0x3CF90E0", Offset = "0x3CF90E0", VA = "0x3CF90E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700028F")]
	public bool IsMainCharacter
	{
		[Token(Token = "0x600140D")]
		[Address(RVA = "0x3CF9100", Offset = "0x3CF9100", VA = "0x3CF9100")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000290")]
	public CustomLogicTransformBuiltin Transform
	{
		[Token(Token = "0x600140E")]
		[Address(RVA = "0x3CF9120", Offset = "0x3CF9120", VA = "0x3CF9120")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000291")]
	public virtual CustomLogicVector3Builtin Position
	{
		[Token(Token = "0x600140F")]
		[Address(RVA = "0x3CF9190", Offset = "0x3CF9190", VA = "0x3CF9190", Slot = "11")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001410")]
		[Address(RVA = "0x3CF9220", Offset = "0x3CF9220", VA = "0x3CF9220", Slot = "12")]
		set
		{
		}
	}

	[Token(Token = "0x17000292")]
	public CustomLogicVector3Builtin Rotation
	{
		[Token(Token = "0x6001411")]
		[Address(RVA = "0x3CF9290", Offset = "0x3CF9290", VA = "0x3CF9290")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001412")]
		[Address(RVA = "0x3CF9340", Offset = "0x3CF9340", VA = "0x3CF9340")]
		set
		{
		}
	}

	[Token(Token = "0x17000293")]
	public CustomLogicQuaternionBuiltin QuaternionRotation
	{
		[Token(Token = "0x6001413")]
		[Address(RVA = "0x3CF93C0", Offset = "0x3CF93C0", VA = "0x3CF93C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001414")]
		[Address(RVA = "0x3CF9450", Offset = "0x3CF9450", VA = "0x3CF9450")]
		set
		{
		}
	}

	[Token(Token = "0x17000294")]
	public CustomLogicVector3Builtin Velocity
	{
		[Token(Token = "0x6001415")]
		[Address(RVA = "0x3CF94C0", Offset = "0x3CF94C0", VA = "0x3CF94C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001416")]
		[Address(RVA = "0x3CF9540", Offset = "0x3CF9540", VA = "0x3CF9540")]
		set
		{
		}
	}

	[Token(Token = "0x17000295")]
	public CustomLogicVector3Builtin Forward
	{
		[Token(Token = "0x6001417")]
		[Address(RVA = "0x3CF95C0", Offset = "0x3CF95C0", VA = "0x3CF95C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001418")]
		[Address(RVA = "0x3CF9650", Offset = "0x3CF9650", VA = "0x3CF9650")]
		set
		{
		}
	}

	[Token(Token = "0x17000296")]
	public CustomLogicVector3Builtin Right
	{
		[Token(Token = "0x6001419")]
		[Address(RVA = "0x3CF96C0", Offset = "0x3CF96C0", VA = "0x3CF96C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600141A")]
		[Address(RVA = "0x3CF9750", Offset = "0x3CF9750", VA = "0x3CF9750")]
		set
		{
		}
	}

	[Token(Token = "0x17000297")]
	public CustomLogicVector3Builtin Up
	{
		[Token(Token = "0x600141B")]
		[Address(RVA = "0x3CF97C0", Offset = "0x3CF97C0", VA = "0x3CF97C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600141C")]
		[Address(RVA = "0x3CF9850", Offset = "0x3CF9850", VA = "0x3CF9850")]
		set
		{
		}
	}

	[Token(Token = "0x17000298")]
	public bool HasTargetDirection
	{
		[Token(Token = "0x600141D")]
		[Address(RVA = "0x3CF98C0", Offset = "0x3CF98C0", VA = "0x3CF98C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000299")]
	public CustomLogicVector3Builtin TargetDirection
	{
		[Token(Token = "0x600141E")]
		[Address(RVA = "0x3CF98E0", Offset = "0x3CF98E0", VA = "0x3CF98E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600141F")]
		[Address(RVA = "0x3CF9960", Offset = "0x3CF9960", VA = "0x3CF9960")]
		set
		{
		}
	}

	[Token(Token = "0x1700029A")]
	public string Team
	{
		[Token(Token = "0x6001420")]
		[Address(RVA = "0x3CF99B0", Offset = "0x3CF99B0", VA = "0x3CF99B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001421")]
		[Address(RVA = "0x3CF99D0", Offset = "0x3CF99D0", VA = "0x3CF99D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700029B")]
	public float Health
	{
		[Token(Token = "0x6001422")]
		[Address(RVA = "0x3CF9A20", Offset = "0x3CF9A20", VA = "0x3CF9A20")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001423")]
		[Address(RVA = "0x3CF9A40", Offset = "0x3CF9A40", VA = "0x3CF9A40")]
		set
		{
		}
	}

	[Token(Token = "0x1700029C")]
	public float MaxHealth
	{
		[Token(Token = "0x6001424")]
		[Address(RVA = "0x3CF9A90", Offset = "0x3CF9A90", VA = "0x3CF9A90")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001425")]
		[Address(RVA = "0x3CF9AB0", Offset = "0x3CF9AB0", VA = "0x3CF9AB0")]
		set
		{
		}
	}

	[Token(Token = "0x1700029D")]
	public bool CustomDamageEnabled
	{
		[Token(Token = "0x6001426")]
		[Address(RVA = "0x3CF9B00", Offset = "0x3CF9B00", VA = "0x3CF9B00")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001427")]
		[Address(RVA = "0x3CF9B20", Offset = "0x3CF9B20", VA = "0x3CF9B20")]
		set
		{
		}
	}

	[Token(Token = "0x1700029E")]
	public int CustomDamage
	{
		[Token(Token = "0x6001428")]
		[Address(RVA = "0x3CF9B60", Offset = "0x3CF9B60", VA = "0x3CF9B60")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001429")]
		[Address(RVA = "0x3CF9B80", Offset = "0x3CF9B80", VA = "0x3CF9B80")]
		set
		{
		}
	}

	[Token(Token = "0x1700029F")]
	public string CurrentAnimation
	{
		[Token(Token = "0x600142A")]
		[Address(RVA = "0x3CF9BC0", Offset = "0x3CF9BC0", VA = "0x3CF9BC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A0")]
	public bool Grounded
	{
		[Token(Token = "0x600142B")]
		[Address(RVA = "0x3CF9BE0", Offset = "0x3CF9BE0", VA = "0x3CF9BE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002A1")]
	public CustomLogicRigidbodyBuiltin Rigidbody
	{
		[Token(Token = "0x600142C")]
		[Address(RVA = "0x3CF9C00", Offset = "0x3CF9C00", VA = "0x3CF9C00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A2")]
	public override string ClassName
	{
		[Token(Token = "0x6001445")]
		[Address(RVA = "0x3CFA800", Offset = "0x3CFA800", VA = "0x3CFA800", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A3")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001446")]
		[Address(RVA = "0x3CFA830", Offset = "0x3CFA830", VA = "0x3CFA830", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002A4")]
	public override bool IsStatic
	{
		[Token(Token = "0x6001447")]
		[Address(RVA = "0x3CFA840", Offset = "0x3CFA840", VA = "0x3CFA840", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002A5")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6001448")]
		[Address(RVA = "0x3CFA850", Offset = "0x3CFA850", VA = "0x3CFA850", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001402")]
	[Address(RVA = "0x3CF8DF0", Offset = "0x3CF8DF0", VA = "0x3CF8DF0")]
	protected CustomLogicCharacterBuiltin(BaseCharacter character)
	{
	}

	[Token(Token = "0x6001405")]
	[Address(RVA = "0x3CF8EF0", Offset = "0x3CF8EF0", VA = "0x3CF8EF0")]
	public void SetDisplayName(string name, bool showTag = true)
	{
	}

	[Token(Token = "0x600142D")]
	[Address(RVA = "0x3CF9C70", Offset = "0x3CF9C70", VA = "0x3CF9C70")]
	public void GetKilled(string killer)
	{
	}

	[Token(Token = "0x600142E")]
	[Address(RVA = "0x3CF9CA0", Offset = "0x3CF9CA0", VA = "0x3CF9CA0")]
	public void GetDamaged(string killer, int damage)
	{
	}

	[Token(Token = "0x600142F")]
	[Address(RVA = "0x3CF9CD0", Offset = "0x3CF9CD0", VA = "0x3CF9CD0")]
	public void Emote(string emote)
	{
	}

	[Token(Token = "0x6001430")]
	[Address(RVA = "0x3CF9D30", Offset = "0x3CF9D30", VA = "0x3CF9D30")]
	public void PlayAnimation(string animation, float fade = 0.1f)
	{
	}

	[Token(Token = "0x6001431")]
	[Address(RVA = "0x3CF9D90", Offset = "0x3CF9D90", VA = "0x3CF9D90")]
	public void PlayAnimationAt(string animation, float t, float fade = 0.1f, bool force = false)
	{
	}

	[Token(Token = "0x6001432")]
	[Address(RVA = "0x3CF9E20", Offset = "0x3CF9E20", VA = "0x3CF9E20")]
	public float GetAnimationSpeed(string animation)
	{
		return default(float);
	}

	[Token(Token = "0x6001433")]
	[Address(RVA = "0x3CF9E80", Offset = "0x3CF9E80", VA = "0x3CF9E80")]
	public void SetAnimationSpeed(string animation, float speed, bool synced = true)
	{
	}

	[Token(Token = "0x6001434")]
	[Address(RVA = "0x3CF9F00", Offset = "0x3CF9F00", VA = "0x3CF9F00")]
	public bool IsPlayingAnimation(string animation)
	{
		return default(bool);
	}

	[Token(Token = "0x6001435")]
	[Address(RVA = "0x3CF9F30", Offset = "0x3CF9F30", VA = "0x3CF9F30")]
	public float GetAnimationNormalizedTime(string animation)
	{
		return default(float);
	}

	[Token(Token = "0x6001436")]
	[Address(RVA = "0x3CF9F80", Offset = "0x3CF9F80", VA = "0x3CF9F80")]
	public void ForceAnimation(string animation, float fade = 0.1f)
	{
	}

	[Token(Token = "0x6001437")]
	[Address(RVA = "0x3CF9FF0", Offset = "0x3CF9FF0", VA = "0x3CF9FF0")]
	public float GetAnimationLength(string animation)
	{
		return default(float);
	}

	[Token(Token = "0x6001438")]
	[Address(RVA = "0x3CFA020", Offset = "0x3CFA020", VA = "0x3CFA020")]
	public bool IsPlayingSound(string sound)
	{
		return default(bool);
	}

	[Token(Token = "0x6001439")]
	[Address(RVA = "0x3CFA040", Offset = "0x3CFA040", VA = "0x3CFA040")]
	public void PlaySound(string sound)
	{
	}

	[Token(Token = "0x600143A")]
	[Address(RVA = "0x3CFA0B0", Offset = "0x3CFA0B0", VA = "0x3CFA0B0")]
	public void StopSound(string sound)
	{
	}

	[Token(Token = "0x600143B")]
	[Address(RVA = "0x3CFA120", Offset = "0x3CFA120", VA = "0x3CFA120")]
	public void FadeSound(string sound, float volume, float time)
	{
	}

	[Token(Token = "0x600143C")]
	[Address(RVA = "0x3CFA190", Offset = "0x3CFA190", VA = "0x3CFA190")]
	public void LookAt(CustomLogicVector3Builtin position)
	{
	}

	[Token(Token = "0x600143D")]
	[Address(RVA = "0x3CFA200", Offset = "0x3CFA200", VA = "0x3CFA200")]
	public void AddForce(CustomLogicVector3Builtin force, object mode)
	{
	}

	[Token(Token = "0x600143E")]
	[Address(RVA = "0x3CFA480", Offset = "0x3CFA480", VA = "0x3CFA480")]
	public void Reveal(float delay)
	{
	}

	[Token(Token = "0x600143F")]
	[Address(RVA = "0x3CFA4A0", Offset = "0x3CFA4A0", VA = "0x3CFA4A0")]
	public void AddOutline([Optional] CustomLogicColorBuiltin color, string mode = "OutlineAll")
	{
	}

	[Token(Token = "0x6001440")]
	[Address(RVA = "0x3CFA5E0", Offset = "0x3CFA5E0", VA = "0x3CFA5E0")]
	public void RemoveOutline()
	{
	}

	[Token(Token = "0x6001441")]
	[Address(RVA = "0x3CFA600", Offset = "0x3CFA600", VA = "0x3CFA600", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001442")]
	[Address(RVA = "0x3CFA610", Offset = "0x3CFA610", VA = "0x3CFA610", Slot = "9")]
	public bool __Eq__(object self, object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001443")]
	[Address(RVA = "0x3CFA7B0", Offset = "0x3CFA7B0", VA = "0x3CFA7B0", Slot = "10")]
	public int __Hash__()
	{
		return default(int);
	}

	[Token(Token = "0x6001444")]
	[Address(RVA = "0x3CFA7D0", Offset = "0x3CFA7D0", VA = "0x3CFA7D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
