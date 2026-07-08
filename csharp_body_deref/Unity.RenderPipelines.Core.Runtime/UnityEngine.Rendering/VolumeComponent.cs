using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x20001D9")]
public class VolumeComponent : ScriptableObject
{
	[Token(Token = "0x20001DA")]
	public sealed class Indent : PropertyAttribute
	{
		[Token(Token = "0x4000805")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public readonly int relativeAmount;

		[Token(Token = "0x6000D71")]
		[Address(RVA = "0x48E2C90", Offset = "0x48E2C90", VA = "0x48E2C90")]
		public Indent(int relativeAmount = 1)
		{
		}
	}

	[Token(Token = "0x4000801")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public bool active;

	[Token(Token = "0x4000803")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	internal readonly List<VolumeParameter> parameterList;

	[Token(Token = "0x4000804")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private ReadOnlyCollection<VolumeParameter> m_ParameterReadOnlyCollection;

	[Token(Token = "0x17000193")]
	public string displayName
	{
		[Token(Token = "0x6000D63")]
		[Address(RVA = "0x48E1710", Offset = "0x48E1710", VA = "0x48E1710")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D64")]
		[Address(RVA = "0x48E1720", Offset = "0x48E1720", VA = "0x48E1720")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000194")]
	public ReadOnlyCollection<VolumeParameter> parameters
	{
		[Token(Token = "0x6000D65")]
		[Address(RVA = "0x48E1730", Offset = "0x48E1730", VA = "0x48E1730")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D66")]
	[Address(RVA = "0x48E1790", Offset = "0x48E1790", VA = "0x48E1790")]
	internal static void FindParameters(object o, List<VolumeParameter> parameters, [Optional] Func<FieldInfo, bool> filter)
	{
	}

	[Token(Token = "0x6000D67")]
	[Address(RVA = "0x48E1F00", Offset = "0x48E1F00", VA = "0x48E1F00", Slot = "4")]
	protected virtual void OnEnable()
	{
	}

	[Token(Token = "0x6000D68")]
	[Address(RVA = "0x48E2170", Offset = "0x48E2170", VA = "0x48E2170", Slot = "5")]
	protected virtual void OnDisable()
	{
	}

	[Token(Token = "0x6000D69")]
	[Address(RVA = "0x48E22C0", Offset = "0x48E22C0", VA = "0x48E22C0", Slot = "6")]
	public virtual void Override(VolumeComponent state, float interpFactor)
	{
	}

	[Token(Token = "0x6000D6A")]
	[Address(RVA = "0x48E2410", Offset = "0x48E2410", VA = "0x48E2410")]
	public void SetAllOverridesTo(bool state)
	{
	}

	[Token(Token = "0x6000D6B")]
	[Address(RVA = "0x48E2420", Offset = "0x48E2420", VA = "0x48E2420")]
	internal void SetOverridesTo(IEnumerable<VolumeParameter> enumerable, bool state)
	{
	}

	[Token(Token = "0x6000D6C")]
	[Address(RVA = "0x48E29E0", Offset = "0x48E29E0", VA = "0x48E29E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000D6D")]
	[Address(RVA = "0x48E2A90", Offset = "0x48E2A90", VA = "0x48E2A90")]
	public bool AnyPropertiesIsOverridden()
	{
		return default(bool);
	}

	[Token(Token = "0x6000D6E")]
	[Address(RVA = "0x48E2B30", Offset = "0x48E2B30", VA = "0x48E2B30", Slot = "7")]
	protected virtual void OnDestroy()
	{
	}

	[Token(Token = "0x6000D6F")]
	[Address(RVA = "0x48E2B40", Offset = "0x48E2B40", VA = "0x48E2B40")]
	public void Release()
	{
	}

	[Token(Token = "0x6000D70")]
	[Address(RVA = "0x48E2BF0", Offset = "0x48E2BF0", VA = "0x48E2BF0")]
	public VolumeComponent()
	{
	}
}
