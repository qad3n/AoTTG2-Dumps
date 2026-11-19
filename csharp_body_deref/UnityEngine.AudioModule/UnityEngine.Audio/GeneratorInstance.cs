// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Audio.GeneratorInstance
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.IntegerTime;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Audio;

[Token(Token = "0x200001F")]
public struct GeneratorInstance : IEquatable<GeneratorInstance>
{
	[Token(Token = "0x2000020")]
	public interface ICapabilities
	{
		[Token(Token = "0x1700001D")]
		bool isFinite
		{
			[Token(Token = "0x600008D")]
			get;
		}

		[Token(Token = "0x1700001E")]
		bool isRealtime
		{
			[Token(Token = "0x600008E")]
			get;
		}

		[Token(Token = "0x1700001F")]
		DiscreteTime? length
		{
			[Token(Token = "0x600008F")]
			get;
		}
	}

	[Token(Token = "0x2000021")]
	public readonly struct Setup
	{
		[Token(Token = "0x4000028")]
		[FieldOffset(Offset = "0x0")]
		public readonly AudioSpeakerMode speakerMode;

		[Token(Token = "0x4000029")]
		[FieldOffset(Offset = "0x4")]
		public readonly int sampleRate;
	}

	[Token(Token = "0x2000022")]
	public struct Properties
	{
		[Token(Token = "0x400002A")]
		[FieldOffset(Offset = "0x0")]
		private byte m_Reserved;
	}

	[Token(Token = "0x2000023")]
	public struct Configuration
	{
		[Token(Token = "0x400002B")]
		[FieldOffset(Offset = "0x0")]
		internal Setup Setup;

		[Token(Token = "0x400002C")]
		[FieldOffset(Offset = "0x8")]
		internal Properties Properties;

		[Token(Token = "0x400002D")]
		[FieldOffset(Offset = "0x10")]
		internal DiscreteTime ReportedLength;

		[Token(Token = "0x400002E")]
		[FieldOffset(Offset = "0x18")]
		internal bool IsFinite;

		[Token(Token = "0x400002F")]
		[FieldOffset(Offset = "0x19")]
		internal bool IsRealtime;

		[Token(Token = "0x4000030")]
		[FieldOffset(Offset = "0x1A")]
		internal bool HasKnownLength;

		[Token(Token = "0x17000020")]
		public bool isRealtime
		{
			[Token(Token = "0x6000090")]
			[Address(RVA = "0x68B1D90", Offset = "0x68B0D90", VA = "0x68B1D90")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000021")]
		public DiscreteTime? length
		{
			[Token(Token = "0x6000091")]
			[Address(RVA = "0x68B1DA0", Offset = "0x68B0DA0", VA = "0x68B1DA0")]
			get
			{
				return null;
			}
		}
	}

	[Token(Token = "0x2000024")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	[UnityEngine.Bindings.NativeHeader("Modules/Audio/Public/ScriptableProcessors/ScriptBindings/GeneratorHandle.h")]
	internal struct GeneratorHeader
	{
		[Token(Token = "0x4000031")]
		[FieldOffset(Offset = "0x0")]
		internal ProcessorHeader Processor;

		[Token(Token = "0x4000032")]
		[FieldOffset(Offset = "0x38")]
		internal Configuration Configuration;
	}

	[Token(Token = "0x4000027")]
	[FieldOffset(Offset = "0x0")]
	internal readonly ProcessorInstance m_ProcessorInstance;

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x68B1C80", Offset = "0x68B0C80", VA = "0x68B1C80")]
	public static implicit operator ProcessorInstance(in GeneratorInstance generatorInstance)
	{
		return default(ProcessorInstance);
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x68B1CA0", Offset = "0x68B0CA0", VA = "0x68B1CA0", Slot = "4")]
	public bool Equals(GeneratorInstance other)
	{
		return default(bool);
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x68B1CE0", Offset = "0x68B0CE0", VA = "0x68B1CE0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x68B1D50", Offset = "0x68B0D50", VA = "0x68B1D50", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
