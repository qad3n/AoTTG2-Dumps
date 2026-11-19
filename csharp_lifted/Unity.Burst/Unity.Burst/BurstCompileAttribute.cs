// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Burst.BurstCompileAttribute
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x630D5C0", Offset = "0x630C5C0", VA = "0x630D5C0")]
		[CompilerGenerated]
		get
		{
			return default(FloatMode);
		}
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x630D5D0", Offset = "0x630C5D0", VA = "0x630D5D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000002")]
	public FloatPrecision FloatPrecision
	{
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x630D5E0", Offset = "0x630C5E0", VA = "0x630D5E0")]
		[CompilerGenerated]
		get
		{
			return default(FloatPrecision);
		}
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x630D5F0", Offset = "0x630C5F0", VA = "0x630D5F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000003")]
	public bool CompileSynchronously
	{
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x630D600", Offset = "0x630C600", VA = "0x630D600")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x630D650", Offset = "0x630C650", VA = "0x630D650")]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	public bool Debug
	{
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x630D6A0", Offset = "0x630C6A0", VA = "0x630D6A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x630D6F0", Offset = "0x630C6F0", VA = "0x630D6F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public bool DisableSafetyChecks
	{
		[Token(Token = "0x600000B")]
		[Address(RVA = "0x630D740", Offset = "0x630C740", VA = "0x630D740")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x630D790", Offset = "0x630C790", VA = "0x630D790")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public bool DisableDirectCall
	{
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x630D7E0", Offset = "0x630C7E0", VA = "0x630D7E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x630D830", Offset = "0x630C830", VA = "0x630D830")]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public OptimizeFor OptimizeFor
	{
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x630D880", Offset = "0x630C880", VA = "0x630D880")]
		[CompilerGenerated]
		get
		{
			return default(OptimizeFor);
		}
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x630D890", Offset = "0x630C890", VA = "0x630D890")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	internal string[] Options
	{
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x630D8A0", Offset = "0x630C8A0", VA = "0x630D8A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x630D8B0", Offset = "0x630C8B0", VA = "0x630D8B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x630D8C0", Offset = "0x630C8C0", VA = "0x630D8C0")]
	public BurstCompileAttribute()
	{
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x630D8D0", Offset = "0x630C8D0", VA = "0x630D8D0")]
	public BurstCompileAttribute(FloatPrecision floatPrecision, FloatMode floatMode)
	{
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x630D8F0", Offset = "0x630C8F0", VA = "0x630D8F0")]
	internal BurstCompileAttribute(string[] options)
	{
	}
}
