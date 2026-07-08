using System;
using System.Collections.ObjectModel;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x2000206")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class ObjectParameter<T> : VolumeParameter<T>
{
	[Token(Token = "0x170001A9")]
	internal ReadOnlyCollection<VolumeParameter> parameters
	{
		[Token(Token = "0x6000E0B")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000E0C")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001AA")]
	public sealed override bool overrideState
	{
		[Token(Token = "0x6000E0D")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000E0E")]
		set
		{
		}
	}

	[Token(Token = "0x170001AB")]
	public sealed override T value
	{
		[Token(Token = "0x6000E0F")]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x6000E10")]
		set
		{
		}
	}

	[Token(Token = "0x6000E11")]
	public ObjectParameter(T value)
	{
	}

	[Token(Token = "0x6000E12")]
	internal override void Interp(VolumeParameter from, VolumeParameter to, float t)
	{
	}
}
