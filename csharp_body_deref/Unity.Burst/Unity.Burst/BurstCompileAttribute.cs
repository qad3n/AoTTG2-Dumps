// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Burst.BurstCompileAttribute
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace Unity.Burst;

[Token(Token = "0x2000007")]
[AttributeUsage(AttributeTargets.Assembly | AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Method)]
[RequireAttributeUsages]
public class BurstCompileAttribute : Attribute
{
	[Token(Token = "0x4000013")]
	[FieldOffset(Offset = "0x18")]
	internal bool? _compileSynchronously;

	[Token(Token = "0x4000014")]
	[FieldOffset(Offset = "0x1A")]
	internal bool? _debug;

	[Token(Token = "0x4000015")]
	[FieldOffset(Offset = "0x1C")]
	internal bool? _disableSafetyChecks;

	[Token(Token = "0x4000016")]
	[FieldOffset(Offset = "0x1E")]
	internal bool? _disableDirectCall;

	[Token(Token = "0x17000001")]
	public FloatMode FloatMode
	{
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		[CompilerGenerated]
		get
		{
			return default(FloatMode);
		}
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x560B20", Offset = "0x55F120", VA = "0x180560B20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000002")]
	public FloatPrecision FloatPrecision
	{
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x8E79A0", Offset = "0x8E5FA0", VA = "0x1808E79A0")]
		[CompilerGenerated]
		get
		{
			return default(FloatPrecision);
		}
		[Token(Token = "0x6000006")]
		[Address(RVA = "0xD23EE0", Offset = "0xD224E0", VA = "0x180D23EE0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000003")]
	public bool CompileSynchronously
	{
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x2950530", Offset = "0x294EB30", VA = "0x182950530")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x29506B0", Offset = "0x294ECB0", VA = "0x1829506B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	public bool Debug
	{
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x2950590", Offset = "0x294EB90", VA = "0x182950590")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x2950710", Offset = "0x294ED10", VA = "0x182950710")]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public bool DisableSafetyChecks
	{
		[Token(Token = "0x600000B")]
		[Address(RVA = "0x2950650", Offset = "0x294EC50", VA = "0x182950650")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x29507D0", Offset = "0x294EDD0", VA = "0x1829507D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public bool DisableDirectCall
	{
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x29505F0", Offset = "0x294EBF0", VA = "0x1829505F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x2950770", Offset = "0x294ED70", VA = "0x182950770")]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public OptimizeFor OptimizeFor
	{
		[Token(Token = "0x600000F")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
		[CompilerGenerated]
		get
		{
			return default(OptimizeFor);
		}
		[Token(Token = "0x6000010")]
		[Address(RVA = "0xE4C6E0", Offset = "0xE4ACE0", VA = "0x180E4C6E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	internal string[] Options
	{
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public BurstCompileAttribute()
	{
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x29504F0", Offset = "0x294EAF0", VA = "0x1829504F0")]
	public BurstCompileAttribute(FloatPrecision floatPrecision, FloatMode floatMode)
	{
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x28DDE00", Offset = "0x28DC400", VA = "0x1828DDE00")]
	internal BurstCompileAttribute(string[] options)
	{
	}
}
